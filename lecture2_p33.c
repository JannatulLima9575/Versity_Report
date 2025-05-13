#include <stdio.h>
#define PI 3.142

int main(void) {
    float radius, height, volume_sphere, volume_cylinder;

    printf("Take radius: ");
    scanf("%f", &radius);

    printf("Take height: ");
    scanf("%f", &height);

    volume_sphere = (4.0 / 3.0) * PI * radius * radius * radius;
    volume_cylinder = PI * radius * radius * height;

    printf("Volume of sphere = %.2f\n", volume_sphere);
    printf("Volume of cylinder = %.2f\n", volume_cylinder);

    return 0;
}
