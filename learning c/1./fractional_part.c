#include <stdio.h>

int main() {
    float x,z;
    printf("Enter a number: ");
    scanf("%f", &x);
    int y;
    y=x;
    z= x-y;
    printf("the fractional part will be: %f ",z);
    return 0;
}