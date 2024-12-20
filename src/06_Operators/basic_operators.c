#include <stdio.h>

int main() {
    int w = 10;
    w--; // w becomes 9.
    --w; // w becomes 8.

    int x = 10;
    int y = x--; // y becomes 10, and then x becomes 9.
    int z = --x; // z becomes 8, and then x becomes 8.

    // Boolean operators
    int a = 10;
    int b = 20;
    _Bool c = a && b; // c becomes 1 (true), because both a and b are true.
    _Bool d = a || b; // d becomes 1 (true), because at least one of a or b is true.
    _Bool e = !a; // e becomes 0 (false), because a is true.

    
 
    return 0;
}