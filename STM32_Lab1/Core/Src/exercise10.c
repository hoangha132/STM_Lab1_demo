#include "exercise10.h"

static int currentHour = 0;
static int currentMinute = 0;
static int currentSecond = 0;

void exercise10_run() {
	clearALLClock();
    currentSecond++;
    if (currentSecond >= 60) {
        currentSecond = 0;
        currentMinute++;
        if (currentMinute >= 60) {
            currentMinute = 0;
            currentHour++;
            if (currentHour >= 12) {
                currentHour = 0;
            }
        }
    }

    clearNumberOnClock((currentSecond - 1) / 5);
	setNumberOnClock(currentSecond / 5);

	clearNumberOnClock((currentMinute - 1) / 5);
	setNumberOnClock(currentMinute / 5);

//	clearNumberOnClock((currentHour - 1) % 12);
	setNumberOnClock(currentHour);
}
