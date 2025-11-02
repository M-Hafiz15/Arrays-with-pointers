#include <stdio.h>

long long factorial(int n);

int main() {
    int n;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(n);
        printf("%d! = %lld\n", n, result);
    }

    return 0;
}

long long factorial(int n) {
    if (n == 0) 
        return 1;
    else
        return n * factorial(n - 1); 
