#include <stdio.h>

/*
    while loop:
    while (condition){
        // code
    }

    do {
        // code
    } while (condition);

    The difference between while and do while is that while will check the condition first, and if it is true, it will execute the code inside the loop.

    do while will execute the code inside the loop first, and then check the condition. Meaning, it will fire at least once.

*/

int main(){
    int a = 0;

    while (a < 20){
        printf("a is equal to %d\n", a);
        ++a;
    }

    do {
        printf("a is equal to %d\n", a);
        ++a;
    } while (a < 20);

    return 0;
}