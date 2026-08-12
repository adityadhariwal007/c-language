#include <stdio.h>

int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("yes it is a three digit no.");
    }
    else
    {
        printf("it is not a three digit no.");
    }

    return 0;
}