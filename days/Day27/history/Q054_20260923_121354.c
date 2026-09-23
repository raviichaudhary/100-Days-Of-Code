#include <stdio.h>

int main() {
    int i, j;

    // Increasing part
    for (i = 1; i <= 7; i = i + 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing part
    for (i = 5; i >= 1; i = i - 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}