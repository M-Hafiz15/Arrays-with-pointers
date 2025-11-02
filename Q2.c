#include <stdio.h>

void swapArrays(int *a, int *b, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main() {
    int lahore[] = {11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};
    int size = 5;
    printf("Before Swapping:\n");
    printf("Lahore:  ");
    for (int i = 0; i < size; i++) printf("%d ", lahore[i]);
    printf("\nKarachi: ");
    for (int i = 0; i < size; i++) printf("%d ", karachi[i]);
    printf("\n\n");

 
    swapArrays(lahore, karachi, size);
    printf("After Swapping:\n");
    printf("Lahore:  ");
    for (int i = 0; i < size; i++) printf("%d ", lahore[i]);
    printf("\nKarachi: ");
    for (int i = 0; i < size; i++) printf("%d ", karachi[i]);
    printf("\n");

    return 0;
}
