#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;

    printf("Array elements using pointer:\n");

    i = 0;
    while (i < 5) {
        printf("%d\n", *ptr);
        ptr++; 
        i++;
    }

    return 0;
}