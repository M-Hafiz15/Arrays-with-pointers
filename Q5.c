#include <stdio.h>

int main() {
    int image[8][8], bright[8][8];
    int i, j;

    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            image[i][j] = (i * 30 + j * 10) % 256; 
        }
    }

    printf("Original Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }

    printf("\nBrightened Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            bright[i][j] = image[i][j] + 20;
            if(bright[i][j] > 255)
                bright[i][j] = 255;
            printf("%3d ", bright[i][j]);
        }
        printf("\n");
    }

    return 0;
}