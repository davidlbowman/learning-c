#include <stdio.h>


int main(){
    float weatherData[5][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
    };

    int currentYear = 2010;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 12; j++){
            printf("The average temperature for %d in %d is %f\n", j + 1, currentYear + i, weatherData[i][j]);
        }
    }

    return 0;
    
}