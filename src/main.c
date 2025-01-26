/**
 * Priority:
 *  nicest:    0
 *  group1: 1 - 10
 *  group2: 11 - 20
 *  group3: 21 - 30
 */
#include <stdio.h>
#include <rtthread.h>
#include "gpio.h"
#include "include/funs.h"

void led_manager();



int main(void)
{
    rt_thread_t lm;
    lm = rt_thread_create("led_manager", led_manager, RT_NULL, 1024, 28, 100);
    if (lm != RT_NULL)
        rt_thread_startup(lm);

    while (1)
    {
        rt_kprintf("thread-main\n");
        rt_thread_mdelay(500);
    }
}

/*
 * for managing leds' activity
 */
void led_manager()
{
    led_onboard_init();
    
    while (1) {
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_2);
        rt_thread_mdelay(500);
    }
}