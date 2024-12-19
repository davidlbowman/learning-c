#include <stdio.h>

int main() {
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company google = XEROX;
    enum Company xerox = GOOGLE;
    enum Company yahoo = EBAY;
 
    printf("%d\n", google);
    printf("%d\n", xerox);
    printf("%d\n", yahoo);

    return 0;
}