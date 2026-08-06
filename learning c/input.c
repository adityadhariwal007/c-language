#include <stdio.h>

int main() {
    float radius, area_of_circle;
    printf("what will be the radius of circle?\n");
    scanf("%f",&radius);
    
    area_of_circle = 3.14* radius * radius;
    printf("%f",area_of_circle);
    

    return 0;
}
