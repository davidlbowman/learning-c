#include <stdio.h>

int main(){
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    unsigned int c = a & b; // 0000 1100
    printf("Value of c is %d\n", c); // 12

    unsigned int d = c << 1; // 0001 1000
    printf("Value of d is %d\n", d); // 24

    return 0;
}