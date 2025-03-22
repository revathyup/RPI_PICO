#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/device.h>
#include <zephyr/sys/printk.h>

// LEDs
static const struct gpio_dt_spec leds[] = {
    GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led2), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led3), gpios),
};

// Button
static const struct gpio_dt_spec button = GPIO_DT_SPEC_GET(DT_ALIAS(button0), gpios);

// Semaphore and Mutex
K_SEM_DEFINE(button_sem, 0, 1);
K_MUTEX_DEFINE(led_index_mutex);

static int current_led_index = 0;

// Button callback
static struct gpio_callback button_cb;

// Button ISR
void button_isr(const struct device *dev, struct gpio_callback *cb, uint32_t pins) {
    k_sem_give(&button_sem);
}

// Button task function
void button_task(void *unused1, void *unused2, void *unused3) {
    while (1) {
        k_sem_take(&button_sem, K_FOREVER);
        k_mutex_lock(&led_index_mutex, K_FOREVER);
        current_led_index = (current_led_index + 1) % 4;
        k_mutex_unlock(&led_index_mutex);
    }
}

// Blink task function
void blink_task(void *unused1, void *unused2, void *unused3) {
    while (1) {
        k_mutex_lock(&led_index_mutex, K_FOREVER);
        int led_idx = current_led_index;
        k_mutex_unlock(&led_index_mutex);

        gpio_pin_toggle_dt(&leds[led_idx]);
        k_msleep(500); // Blink interval
    }
}

// Thread definitions
K_THREAD_DEFINE(blink_task_id, 512, blink_task, NULL, NULL, NULL, 5, 0, 0);
K_THREAD_DEFINE(button_task_id, 512, button_task, NULL, NULL, NULL, 6, 0, 0); // Higher priority

int main(void) {
    // Configure LEDs
    for (int i = 0; i < 4; i++) {
        if (!gpio_is_ready_dt(&leds[i])) {
            printk("LED %d device not ready\n", i);
            return -1;
        }
        if (gpio_pin_configure_dt(&leds[i], GPIO_OUTPUT_INACTIVE) < 0) {
            printk("Failed to configure LED %d\n", i);
            return -1;
        }
    }

    // Configure button
    if (!gpio_is_ready_dt(&button)) {
        printk("Button device not ready\n");
        return -1;
    }
    if (gpio_pin_configure_dt(&button, GPIO_INPUT) < 0) {
        printk("Failed to configure button\n");
        return -1;
    }
    if (gpio_pin_interrupt_configure_dt(&button, GPIO_INT_EDGE_FALLING) < 0) {
        printk("Failed to configure button interrupt\n");
        return -1;
    }

    // Initialize and add button callback
    gpio_init_callback(&button_cb, button_isr, BIT(button.pin));
    gpio_add_callback(button.port, &button_cb);

    printk("Application started\n");

    // Main thread sleeps indefinitely
    while (1) {
        k_sleep(K_FOREVER);
    }

    return 0;
}