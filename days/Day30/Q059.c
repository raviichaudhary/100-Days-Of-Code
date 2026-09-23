#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}