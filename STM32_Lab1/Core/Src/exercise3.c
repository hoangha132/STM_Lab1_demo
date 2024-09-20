#include "exercise3.h"

int counter3 = 11;

void init_exercise3() {
    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
    HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);
    HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
    HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
    HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);
    HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
    HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
    HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);
    HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
    HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);
    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
}

void set_led_group(int direction, int led_color) {
    // Reset all 3 LEDs in the group (Red, Yellow, Green)
//    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
//    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);

    // Select the correct LED to set based on the color
    switch (direction) {
        case 0: // North (LED_11, LED_12, LED_1)
            if (led_color == LED_RED){
                HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_YELLOW){
            	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_GREEN){
            	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
            	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
            }
            break;

        case 2: // South (LED_7, LED_6, LED_5)
            if (led_color == LED_RED){
            	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_YELLOW){
            	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
            }
            else if (led_color == LED_GREEN){
            	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
            }

            break;

        case 1: // East (LED_2, LED_3, LED_4)
            if (led_color == LED_RED){
                HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_YELLOW){
            	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_GREEN){
            	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
            }
            break;

        case 3: // West (LED_10, LED_9, LED_8)
            if (led_color == LED_RED){
                HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_YELLOW){
                HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
            }
            else if (led_color == LED_GREEN){
                HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
            }
            break;

        default:
            break;
    }
}

void exercise3_run() {
	counter3--;
	if (counter3 <= 0 ){
		counter3 = 10;
	}
	switch (counter3){
		case 10:
			set_led_group(0, LED_RED);
			set_led_group(2, LED_RED);
			set_led_group(1, LED_GREEN);
			set_led_group(3, LED_GREEN);
		break;
		case 9:
			set_led_group(0, LED_RED);
			set_led_group(2, LED_RED);
			set_led_group(1, LED_GREEN);
			set_led_group(3, LED_GREEN);
		break;
		case 8:
			set_led_group(0, LED_RED);
			set_led_group(2, LED_RED);
			set_led_group(1, LED_GREEN);
			set_led_group(3, LED_GREEN);
		break;
		case 7:
			set_led_group(0, LED_RED);
			set_led_group(2, LED_RED);
			set_led_group(1, LED_YELLOW);
			set_led_group(3, LED_YELLOW);
		break;
		case 6:
			set_led_group(0, LED_RED);
			set_led_group(2, LED_RED);
			set_led_group(1, LED_YELLOW);
			set_led_group(3, LED_YELLOW);
		break;
		case 5:
			set_led_group(0, LED_GREEN);
			set_led_group(2, LED_GREEN);
			set_led_group(1, LED_RED);
			set_led_group(3, LED_RED);
		break;
		case 4:
			set_led_group(0, LED_GREEN);
			set_led_group(2, LED_GREEN);
			set_led_group(1, LED_RED);
			set_led_group(3, LED_RED);
		break;
		case 3:
			set_led_group(0, LED_GREEN);
			set_led_group(2, LED_GREEN);
			set_led_group(1, LED_RED);
			set_led_group(3, LED_RED);
		break;
		case 2:
			set_led_group(0, LED_YELLOW);
			set_led_group(2, LED_YELLOW);
			set_led_group(1, LED_RED);
			set_led_group(3, LED_RED);
		break;
		case 1:
			set_led_group(0, LED_YELLOW);
			set_led_group(2, LED_YELLOW);
			set_led_group(1, LED_RED);
			set_led_group(3, LED_RED);
		break;
	}
}
