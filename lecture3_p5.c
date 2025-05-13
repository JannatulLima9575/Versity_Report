#include <stdio.h>

int main() {
    int total_days, months, days;

    printf("Enter total number of days: ");
    scanf("%d", &total_days);

    months = total_days / 30;
    days = total_days % 30;

    printf("Months = %d and Days = %d\n", months, days);

    return 0;
}
