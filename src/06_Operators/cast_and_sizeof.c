#include <stdio.h>

int main(){
    int a = 10;
    double b = (double) a;
    printf("Value of b is %.2f\n", b); // 10.00

    double c = 123.456;
    int d = (int) c;
    printf("Value of d is %d\n", d); // 123

    int e = sizeof(a);
    printf("Size of `int a` is %d bytes\n", e); // 4

    int f = sizeof(c);
    printf("Size of `double c` is %d bytes\n", f); // 8

    return 0;
}