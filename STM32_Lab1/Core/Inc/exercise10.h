/*
 * exercise10.h
 *
 *  Created on: Sep 24, 2024
 *      Author: Welcome
 */

#ifndef INC_EXERCISE10_H_
#define INC_EXERCISE10_H_
#include "exercise7.h"
#include "exercise8.h"
#include "exercise9.h"

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

#endif /* INC_EXERCISE10_H_ */
