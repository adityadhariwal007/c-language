
#include <stdio.h>

int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    if (x % 3 == 0 || x % 5 == 0)
    {
        printf("yes it is divisible by  5 or 3");
    }
    else
    {
        printf("no it is not divisible by any of  5 or 3");
    }

    return 0;}