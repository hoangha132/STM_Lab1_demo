#include "exercise5.h"

void display7SEG1(int num) {
    // Clear all segments before setting new ones
    HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_14_GPIO_Port, SEG_14_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_SET);

    switch (num) {
        case 0:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_14_GPIO_Port, SEG_14_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            break;
        case 1:
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_14_GPIO_Port, SEG_14_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_14_GPIO_Port, SEG_14_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            break;
        case 8:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_14_GPIO_Port, SEG_14_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_15_GPIO_Port, SEG_15_Pin, GPIO_PIN_RESET);
            HAL_GPIO_WritePin(SEG_16_GPIO_Port, SEG_16_Pin, GPIO_PIN_RESET);
            break;
    }
}

typedef enum {
    RED_STATE,
    GREEN_STATE,
    YELLOW_STATE
} TrafficLightState;

int red_duration = 5;
int yellow_duration = 2;
int green_duration = 3;

int red1_duration = 5;
int yellow1_duration = 2;
int green1_duration = 3;

TrafficLightState current_state = RED_STATE;
TrafficLightState current_state1 = GREEN_STATE;

void exercise5_run(){
    if (red_duration > 0){
        set_led_group(0, LED_RED);
        set_led_group(2, LED_RED);
        display7SEG(red_duration);
        red_duration--;
        return;
    }

    if (green_duration > 0){
        set_led_group(0, LED_GREEN);
        set_led_group(2, LED_GREEN);
        display7SEG(green_duration);
        green_duration--;
        return;
    }

    if (yellow_duration > 0){
        set_led_group(0, LED_YELLOW);
        set_led_group(2, LED_YELLOW);
        display7SEG(yellow_duration);
        yellow_duration--;
        return;
    }

    if (yellow_duration == 0){
        red_duration = 5;
        green_duration = 3;
        yellow_duration = 2;
    }
}

void exercise51_run(){
    if (green1_duration > 0){
        set_led_group(1, LED_GREEN);
        set_led_group(3, LED_GREEN);
        display7SEG1(green1_duration);
        green1_duration--;
        return;
    }

    //
    if (yellow1_duration > 0){
        set_led_group(1, LED_YELLOW);
        set_led_group(3, LED_YELLOW);
        display7SEG1(yellow1_duration);
        yellow1_duration--;
        return;
    }

    if (red1_duration > 0){
		set_led_group(1, LED_RED);
		set_led_group(3, LED_RED);
		display7SEG1(red1_duration);
		red1_duration--;
		return;
	}
    // Reset cycle after YELLOW phase ends
    if (yellow1_duration == 0){
        red1_duration = 5;
        green1_duration = 3;
        yellow1_duration = 2;
    }
}




