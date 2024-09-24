#include "exercise5.h"

int red_duration = 5;
int yellow_duration = 0;
int green_duration = 0;

void exercise5_run() {
    // Handle RED light phase
    if (red_duration > 0) {
        set_led_group(0, LED_RED);
        set_led_group(2, LED_RED);
        display7SEG(red_duration);
        red_duration--;
        return;  // Exit after processing the red phase
    }

    // Handle GREEN light phase
    if (green_duration > 0) {
        set_led_group(0, LED_GREEN);
        set_led_group(2, LED_GREEN);
        display7SEG(green_duration);
        green_duration--;
        return;  // Exit after processing the green phase
    } else {
        // Start the GREEN phase if not yet started
        green_duration = 3;
    }

    // Handle YELLOW light phase
    if (yellow_duration > 0) {
        set_led_group(0, LED_YELLOW);
        set_led_group(2, LED_YELLOW);
        display7SEG(yellow_duration);
        yellow_duration--;
        return;  // Exit after processing the yellow phase
    } else {
        // Start the YELLOW phase if not yet started
        yellow_duration = 2;
    }

    // Reset to RED phase after all others complete
    red_duration = 5;
}




