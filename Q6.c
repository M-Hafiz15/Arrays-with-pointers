#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[10][10]);
void multiplyMatrices(int r1, int c1, int a[10][10], int r2, int c2, int b[10][10], int result[10][10]);
void displayMatrix(int rows, int cols, int matrix[10][10]);

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of first must equal rows of second.\n");
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    inputMatrix(r1, c1, a);

    printf("\nEnter elements of second matrix:\n");
    inputMatrix(r2, c2, b);
    multiplyMatrices(r1, c1, a, r2, c2, b, result);

    printf("\nResultant Matrix (A x B):\n");
    displayMatrix(r1, c2, result);

    return 0;
}

void inputMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int r1, int c1, int a[10][10], int r2, int c2, int b[10][10], int result[10][10]) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[10][10]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}
