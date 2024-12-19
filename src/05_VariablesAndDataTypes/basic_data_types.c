#include <stdio.h>

int main() {
    int myAge = 37; // 32-bit integer
    float myWeight = 86.5; // 32-bit floating point number
    double myGpa = 3.7; // 64-bit floating point number
    _Bool myBoolean = 1; // 8-bit boolean

    /* 
    An Array is a collection of variables of the same type. 
    The number of elements in an array is called the length of the array.
    Secretly, an array is a pointer to the first element of the array.
    */

    int myNumbers[5]; // This is an array of 5 integers.
    myNumbers[0] = 10; // This is the first element of the array.
    myNumbers[1] = 20; // This is the second element of the array.
    myNumbers[2] = 30; // This is the third element of the array.
    myNumbers[3] = 40; // This is the fourth element of the array.
    myNumbers[4] = 50; // This is the fifth element of the array.

    // You can also delcare multiple variables at once.
    int x = 10, y = 20, z = 30;

    // You can assign hexadecimal values to variables.
    int myHexValue = 0x1A;
    
    // You can express floats as scientific notation.
    float myScientificNotation = 1.23e4;

    // You can use the `bool` keyword to declare a boolean variable.
    #include <stdbool.h>
    bool myBoolean = true;

    // There's adjective keywords for the data types.
    short int myShortInt = 10;
    long int myLongInt = 10;
    unsigned int myUnsignedInt = 10; // This is a positive integer.

    return 0;
}
