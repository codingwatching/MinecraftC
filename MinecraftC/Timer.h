#pragma once
#include <stdint.h>

typedef struct Timer {
	float ticksPerSecond;
	float lastHR;
	int elapsedTicks;
	float delta;
	float speed;
	float elapsedDelta;
	uint64_t lastSystemClock;
	uint64_t lastHRClock;
	float adjustment;
} Timer;

void TimerCreate(Timer * timer, float ticksPerSecond);
