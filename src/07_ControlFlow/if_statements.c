#include <stdio.h>

int main(){
    int a = 0, b = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter another integer: ");
    scanf("%d", &b);

    if (a > b){
        printf("%d is greater than %d\n", a, b);
    }

    else if (a < b){
        printf("%d is less than %d\n", a, b);
    }

    else {
        printf("%d is equal to %d\n", a, b);
    }

    /* 
    This is a ternary operator. It is a shorthand way to write an if statement.
    a > b ? printf("%d is greater than %d\n", a, b) : printf("%d is less than %d\n", a, b);
    */

    return 0;
}
