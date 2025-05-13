#include <stdio.h>

int main() {
    int a =15;
    int b =10;
    int c =++a - b;
    int d =b++ +a;

    printf("a=%d b=%d c=%d d=%d", a,b,c,d);

    return 0;
}