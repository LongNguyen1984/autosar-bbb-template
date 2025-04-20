#include "Std_Types.h"
#include "RTE.h"
#include "App_LED.h"
#include <unistd.h>  // for sleep (simulate delay)
int main() {
    RTE_Init();
    
    while (1) {
      App_LED_MainFunction();
      sleep(1); // call every 1 second
    }
    return 0;
}

