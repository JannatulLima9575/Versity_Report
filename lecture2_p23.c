#include <stdio.h>

int main() {
    typedef float distance;
    distance miles, km;

    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    km = 1.6 * miles;
    printf("Distance in kilometers: %.2f\n", km);

    return 0;
}