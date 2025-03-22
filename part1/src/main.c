#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

// Delays (ms)
static uint32_t delays[] = {100, 200, 300, 500};

// LEDs (from devicetree)
static const struct gpio_dt_spec leds[] = {
    GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led2), gpios),
    GPIO_DT_SPEC_GET(DT_ALIAS(led3), gpios),
};

// Blinky task
void blinky_task(void *delay_ptr, void *led_id, void *unused) {
    uint32_t delay = *(uint32_t *)delay_ptr;
    const struct gpio_dt_spec *led = &leds[(int)led_id];

    while (1) {
        gpio_pin_toggle_dt(led);
        k_msleep(delay);
    }
}

// Threads
K_THREAD_DEFINE(led0_thread, 512, blinky_task, &delays[0], (void *)0, NULL, 5, 0, 0);
K_THREAD_DEFINE(led1_thread, 512, blinky_task, &delays[1], (void *)1, NULL, 5, 0, 0);
K_THREAD_DEFINE(led2_thread, 512, blinky_task, &delays[2], (void *)2, NULL, 5, 0, 0);
K_THREAD_DEFINE(led3_thread, 512, blinky_task, &delays[3], (void *)3, NULL, 5, 0, 0);

int main(void) {
    for (int i = 0; i < 4; i++) {
        gpio_pin_configure_dt(&leds[i], GPIO_OUTPUT_ACTIVE);
    }
    return 0;

}
