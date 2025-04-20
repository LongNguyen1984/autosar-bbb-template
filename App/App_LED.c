#include "App_LED.h"
#include "RTE.h"

static void App_LED_Init(void);
static void App_LED_Toggle(void);

void App_LED_MainFunction(void)
{
    static boolean initialized = FALSE;

    if (!initialized)
    {
        App_LED_Init();
        initialized = TRUE;
    }

    App_LED_Toggle();
}

static void App_LED_Init(void)
{
    Rte_Call_LED_SetState(FALSE); // Start with LED off
}

static void App_LED_Toggle(void)
{
    static boolean state = FALSE;
    state = !state;
    Rte_Call_LED_SetState(state);
}

