#include <stdio.h>

int main(){
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int myArray2[10] = {0};
    int myArray3[5] = {[0] = 1, [4] = 5};

    for (int i = 0; i < 10; i++){
        printf("myArray[%d] is equal to %d\n", i, myArray[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("myArray2[%d] is equal to %d\n", i, myArray2[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("myArray3[%d] is equal to %d\n", i, myArray3[i]);
    }
 
    return 0;
}