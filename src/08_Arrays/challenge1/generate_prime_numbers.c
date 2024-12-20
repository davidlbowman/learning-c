#include <stdio.h>
#include <stdbool.h>

int main() {
    int primeNumbers[100] = {2, 3};
    int primeCount = 2;

    for (int i = 5; i <= 100; i++) {
        bool isPrime = true;
        
        for (int j = 0; j < primeCount; j++) {
            if (i % primeNumbers[j] == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            primeNumbers[primeCount] = i;
            primeCount++;
        }
    }

    for (int i = 0; i < primeCount; i++){
        printf("%d is a prime number\n", primeNumbers[i]);
    }

    return 0;
}