#include "exercise3.h"

int led_status[4] = {LED_RED, LED_RED, LED_RED, LED_RED};  // Initial state for all directions: Red
int counter3 = 0;

// LED Pin and Port configuration
void init_exercise3() {
//    for (int i = 0; i < 12; i++) {
//        HAL_GPIO_WritePin(GPIOB, (1 << i), GPIO_PIN_RESET);
//    }
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
    HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);

    // Select the correct LED to set based on the color
    switch (direction) {
        case 0: // North (LED_11, LED_12, LED_1)
            if (led_color == LED_RED)
                HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
            else if (led_color == LED_YELLOW)
                HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
            else if (led_color == LED_GREEN)
                HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
            break;

        case 1: // East (LED_5, LED_6, LED_7)
            if (led_color == LED_RED)
                HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
            else if (led_color == LED_YELLOW)
                HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
            else if (led_color == LED_GREEN)
                HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
            break;

        case 2: // South (LED_9, LED_10, LED_11)
            if (led_color == LED_RED)
                HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
            else if (led_color == LED_YELLOW)
                HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
            else if (led_color == LED_GREEN)
                HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
            break;

        case 3: // West (LED_3, LED_2, LED_1)
            if (led_color == LED_RED)
                HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
            else if (led_color == LED_YELLOW)
                HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
            else if (led_color == LED_GREEN)
                HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
            break;

        default:
            break;
    }
}

void exercise3_run() {
    counter3++;

    // Handle the timing for each state of the traffic light for 4 directions
    for (int i = 0; i < 4; i++) {
        switch (led_status[i]) {
            case LED_RED:
                if (counter3 >= 5) {  // Red for 5 seconds
                    led_status[i] = LED_YELLOW;
                    set_led_group(i, LED_YELLOW);
                }
                break;
            case LED_YELLOW:
                if (counter3 >= 2) {  // Yellow for 2 seconds
                    led_status[i] = LED_GREEN;
                    set_led_group(i, LED_GREEN);
                }
                break;
            case LED_GREEN:
                if (counter3 >= 3) {  // Green for 3 seconds
                    led_status[i] = LED_RED;
                    set_led_group(i, LED_RED);
                }
                break;
            default:
                break;
        }
    }

    if (counter3 >= 10) {
        counter3 = 0;
    }
}
