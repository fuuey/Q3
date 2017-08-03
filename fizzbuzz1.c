#include <stdio.h>

void fizzbuzz1(void) {
    int n = 0;
    while (n < 100) {
        if (n % 3 == 0) {
            printf("Fizz");
        } else if (n % 5 == 0) {
            printf("Buzz");
        } else {
            printf("%d",n);
        }
        n++;
    }
}
