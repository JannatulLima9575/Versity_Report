#include <stdio.h>
#include <float.h>

 int main() {
        printf("storage size for float : %d \n", sizeof(double));
        printf("Minimum float positive value : %E\n", DBL_MIN);
        printf("Maximum float positive value : %E\n", DBL_MAX);
        printf("Precision value : %d\n", FLT_DIG);

        return 0;
 }