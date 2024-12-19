#include <stdio.h>

int main() {
    float width = 0;
    float height = 0;
    int decimalPlaces = 0;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("What number of decimal places do you want to use? ");
    scanf("%d", &decimalPlaces);

    float parameter = 2 * (width + height);
    float area = width * height;

    printf("Width is: %.*f, Height is: %.*f\n", decimalPlaces, width, decimalPlaces, height);
    printf("The area of the rectangle is %.*f\n", decimalPlaces, area);
    printf("The parameter of the rectangle is %.*f\n", decimalPlaces, parameter);

    return 0;
}