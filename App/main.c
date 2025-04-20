#include "RTE.h"
#include "SchM.h"

int main() {
    RTE_Init();
    SchM_Init();
    
    while (1) {
        SchM_Schedule();
    }
    return 0;
}

