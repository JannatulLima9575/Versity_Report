#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers to compare: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
        printf("%d and %d are equal.\n", num1, num2);
    if (num1 != num2)
        printf("%d and %d are not equal.\n", num1, num2);
    if (num1 < num2)
        printf("%d is less than %d.\n", num1, num2);
    if (num1 > num2)
        printf("%d is greater than %d.\n", num1, num2);
    if (num1 <= num2)
        printf("%d is less than or equal to %d.\n", num1, num2);
    if (num1 >= num2)
        printf("%d is greater than or equal to %d.\n", num1, num2);
}
