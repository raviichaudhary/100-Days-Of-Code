#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reversing the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Printing reversed array
    printf("Reversed array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}