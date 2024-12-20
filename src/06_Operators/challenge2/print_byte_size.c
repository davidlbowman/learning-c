#include <stdio.h>

int main(){
    printf("Size of `int` is %zu bytes\n", sizeof(int));
    printf("Size of `char` is %zu bytes\n", sizeof(char));
    printf("Size of `long` is %zu bytes\n", sizeof(long));
    printf("Size of `long long` is %zu bytes\n", sizeof(long long));
    printf("Size of `double` is %zu bytes\n", sizeof(double));
    printf("Size of `long double` is %zu bytes\n", sizeof(long double));
 
    return 0;
}