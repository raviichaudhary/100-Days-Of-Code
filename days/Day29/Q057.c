#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding sum
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}