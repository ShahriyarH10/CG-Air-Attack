

#include "globals.h"
#include "levels.h"
#include "utils.h"

void initHelicopters() {
    helicoptersRemaining = MAX_HELICOPTERS;
    for(int i = 0; i < MAX_HELICOPTERS; i++) {
        helicopters[i].alive = true;
        helicopters[i].y = randRange(550, 700);
        helicopters[i].dir = (i % 2 == 0) ? 1 : -1;
        helicopters[i].speed = 0.15f;
        helicopters[i].x = (helicopters[i].dir == 1) ? -120 : width + 120;
        helicopters[i].fireTimer = 100 + i * 50;


    }
    for(int i = 0; i < MAX_HELICOPTERS; i++) {

    }

    for(int i = 0; i < MAX_HELI_BULLETS; i++)
        heliBullets[i].active = false;
}
