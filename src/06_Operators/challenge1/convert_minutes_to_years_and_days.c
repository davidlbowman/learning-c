#include <stdio.h>

int main() {
    printf("Enter the number of minutes: ");
    int minutes;
    scanf("%d", &minutes);

    while (minutes < 0){
        printf("Please enter a positive number.\n");
        scanf("%d", &minutes);
    }

    int years = minutes / 525600;
    double days = (minutes % 525600) / 1440.0;

    printf("%d minutes is approximately %d years and %.2f days.\n", minutes, years, days);

    return 0;
}