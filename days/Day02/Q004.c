#include <stdio.h>

int main() {
    float radius, area, circumference;

    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("%.2f\n", area);
    printf("%.2f", circumference);

    return 0;
}