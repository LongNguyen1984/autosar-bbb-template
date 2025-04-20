#ifndef RTE_H
#define RTE_H

#include "Std_Types.h" // Needed for boolean
void RTE_Init(void);

//RTE API to control LED
void Rte_Call_LED_SetState(boolean state);
#endif

