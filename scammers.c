#include <stdio.h>

int main() {
    int triggerCount = 0;
    int sensorTriggers = 5;   

    
    for (int i = 0; i < sensorTriggers; i++) {
        triggerCount++;
    }

    printf("Total triggers = %d", triggerCount);
    return 0;
}

