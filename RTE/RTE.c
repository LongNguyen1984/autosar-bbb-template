#include "RTE.h"
#include "Std_Types.h"
#include <stdio.h>
// Simulated GPIO state
static boolean ledState = FALSE;

void RTE_Init() {
    // Initialize RTE interfaces here
    printf("[RTE] LED Initialized (OFF)\n");
    ledState = FALSE;
}

void  Rte_Call_LED_SetState(boolean state) {
   ledState = state;
   printf("[RTE] LED is now: %s\n", ledState ? "ON" : "OFF");
}

