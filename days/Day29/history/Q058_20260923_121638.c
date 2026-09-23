#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initially first element is max and min
    max = arr[0];
    min = arr[0];

    // Finding maximum and minimum
    for (i = 1; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}