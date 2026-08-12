#include <stdio.h>

int main()
{
    int x, y, z;
    printf("enter three numbers to compare :");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)

    {
        printf("%d is greatest among all",x);
    }
    else if (y > z && y > x)
    {
        printf("%d is greatest among all",y);
    }
    else if (z > x && z > y)
    {
        printf("%d is greatest among all",z);
    }

    return 0;
}