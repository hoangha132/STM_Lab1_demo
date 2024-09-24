#include "exercise5.h"

typedef enum {
    RED_STATE,
    GREEN_STATE,
    YELLOW_STATE
} TrafficLightState;

int red_duration = 5;
int green_duration = 3;
int yellow_duration = 2;
TrafficLightState current_state = RED_STATE;

void exercise5_run() {
    switch (current_state) {
        case RED_STATE:
            if (red_duration >= 0) {
                set_led_group(0, LED_RED);
                set_led_group(2, LED_RED);
                display7SEG(red_duration);
                red_duration--;
            } else {
                green_duration = 3;
                current_state = GREEN_STATE;
            }
            break;

        case GREEN_STATE:
            if (green_duration >= 0) {
                set_led_group(0, LED_GREEN);
                set_led_group(2, LED_GREEN);
                display7SEG(green_duration);
                green_duration--;
            } else {
                yellow_duration = 2;
                current_state = YELLOW_STATE;
            }
            break;

        case YELLOW_STATE:
            if (yellow_duration >= 0) {
                set_led_group(0, LED_YELLOW);
                set_led_group(2, LED_YELLOW);
                display7SEG(yellow_duration);
                yellow_duration--;
            } else {
                red_duration = 5;
                current_state = RED_STATE;
            }
            break;
    }
}




