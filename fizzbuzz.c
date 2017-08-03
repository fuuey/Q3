#include <stdio.h>
#define MAX 5000

void fizzbuzz(int n) {
    while ( n < MAX) {
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
