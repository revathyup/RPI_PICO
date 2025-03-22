#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>

#define STACK_SIZE 500
#define PRIORITY 5

//#define LED0_NODE DT_ALIAS(led0)
#define BTN_NODE  DT_ALIAS(btn1)

#define BUTTON_DEBOUNCE_DELAY_MS 200
#define TARGET_TIME_MS 3000  // 3 seconds


struct gpio_dt_spec button = GPIO_DT_SPEC_GET(BTN_NODE, gpios);
static struct gpio_callback button_cb;

volatile int64_t first_press_time = 0;
volatile bool first_press_done = false;

void button_isr(const struct device *dev, struct gpio_callback *cb, uint32_t pins)
{
    static int64_t last_press_time = 0;
    int64_t now = k_uptime_get();  // Get current time in ms

    if ((now - last_press_time) > BUTTON_DEBOUNCE_DELAY_MS)
    {
        last_press_time = now;

        if (!first_press_done)
        {
            first_press_time = now;
            first_press_done = true;
            printk("Press the button again after exactly 3 seconds!\n");
        }
        else
        {
            int64_t elapsed_time = now - first_press_time;
            first_press_done = false;

            printk(" pressed after %lld ms. ", elapsed_time);
            if (elapsed_time > TARGET_TIME_MS)
            {
                printk("you were %lld ms late.\n", elapsed_time - TARGET_TIME_MS);
            }
            else if (elapsed_time < TARGET_TIME_MS)
            {
                printk("you were %lld ms early.\n", TARGET_TIME_MS - elapsed_time);
            }
            else
            {
                printk(" You pressed in 3 seconds!\n");
            }
        }
    }
}

int main(void)
{
    
    gpio_pin_configure_dt(&button, GPIO_INPUT | GPIO_PULL_UP);
    gpio_pin_interrupt_configure_dt(&button, GPIO_INT_EDGE_FALLING);
    gpio_init_callback(&button_cb, button_isr, BIT(button.pin));
    gpio_add_callback(button.port, &button_cb);
    printk("Press the button to start the time estimation game!\n");

    while (1)
    {
        k_msleep(500);
    }

    return 0;
}

