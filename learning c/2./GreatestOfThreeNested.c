#include <stdio.h>

int main()
{

    int a, b, c;
    printf("enter three numbers to compare :");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {

        if (a > c)
            printf("%d is the greatest among these numbers", a);
        else
            printf("%d is the greatest among these numbers", c);
    }
    else
    {                       //--> b>a

        if (b > c)
        {
            printf("%d is the greatest among these numbers", b);
        }
        else
        {
            printf("%d is the greatest among these numbers", c);
        }
    }
    return 0;
}