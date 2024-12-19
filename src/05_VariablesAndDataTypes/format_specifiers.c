#include <stdio.h>

int main() {

    // The printf function needs a format specifier to know what to print.

    /* 
    %d is the format specifier for an integer.
    d stands for decimal, which means base 10.
    */ 
    int sum = 89;
    printf("The sum is %d\n", sum); 

    float myFloat = 3.14;
    printf("The float is %f\n", myFloat); // %f is the format specifier for a float.

    double myDouble = 3.141592653589793;
    printf("The double is %f\n", myDouble); // %f is the format specifier for a double.

    char myChar = 'D';
    printf("The char is %c\n", myChar); // %c is the format specifier for a character.

    char myString[] = "Hello World!";
    printf("The string is %s\n", myString); // %s is the format specifier for a string.
    
    _Bool myBool = 1;
    printf("The bool is %i\n", myBool); // %i is the format specifier for an integer.

    // You can also use the %f specifier to specify the number of decimal places.
    printf("The float is %.2f\n", myFloat); // %.2f means 2 decimal places.

    return 0;
}