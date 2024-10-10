#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;

    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}