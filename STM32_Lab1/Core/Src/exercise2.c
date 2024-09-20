#include "exercise2.h"

static int led_status = LED_GREEN;
int counter2 = 5;
int led_delay = 5;

void init_exercise2(){
    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);  // RED
    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);  // YELLOW
    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);    // GREEN
}

void set_led(int led){
    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);

    switch(led){
        case LED_RED:
            HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
            break;
        case LED_YELLOW:
            HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
            break;
        case LED_GREEN:
            HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
            break;
        default:
            break;
    }
}

void exercise2_run(){
    counter2++;

    if (counter2 >= led_delay){
    	counter2 = 0;
    	switch(led_status) {
			case LED_RED:
				led_status = LED_YELLOW;
				led_delay = 2;  // Set YELLOW for 2 seconds
				set_led(LED_YELLOW);
				break;
			case LED_YELLOW:
				led_status = LED_GREEN;
				led_delay = 3;  // Set GREEN for 3 seconds
				set_led(LED_GREEN);
				break;
			case LED_GREEN:
				led_status = LED_RED;
				led_delay = 5;  // Set RED for 5 seconds
				set_led(LED_RED);
				break;
			default:
				break;
		}
    }
}
