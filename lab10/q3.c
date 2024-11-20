#include <stdio.h>
#define MAX_TEMPERATURE 45.0

void checkTemperature(float temp) {
    static int exceedCount = 0;
    if (temp > MAX_TEMPERATURE) {
        exceedCount++;
        printf("Temperature %.2f exceeds the maximum allowable limit of %.2f.\n", temp, MAX_TEMPERATURE);
    } else {
        printf("Temperature %.2f is within the allowable limit of %.2f.\n", temp, MAX_TEMPERATURE);
    }

    printf("Count of temperatures exceeding the limit: %d\n", exceedCount);
}
int main() {
    float temperature;

    printf("Enter temperatures (negative value to stop):\n");
    while (1) {
        scanf("%f", &temperature);
        if (temperature < 0)
            break;
        checkTemperature(temperature);
    }
    return 0;
}
