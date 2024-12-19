#include <stdio.h>

int reading_input() {
    int myFavoriteNumber;

    printf("Please enter your favorite number\n");
    scanf("%d", &myFavoriteNumber);
    printf("Your favorite number is %d\n", myFavoriteNumber);

    return 0;
}