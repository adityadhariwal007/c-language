#include <stdio.h>

int main()
{
    int x, y, z,a;
    printf("enter four numbers to compare :");
    scanf("%d %d %d %d", &x, &y, &z, &a);
    if (x > y && x > z && x>a)

    {
        printf("%d is greatest among all",x);
    }
    else if (y > z && y > x  && y>a)
    {
        printf("%d is greatest among all",y);
    }
    else if (z > x && z > y && z>a)
    {
        printf("%d is greatest among all",z);
    }
    else if (a > x && a > y && a >z)
    {
        printf("%d is greatest among all",a);
    }

    return 0;
}