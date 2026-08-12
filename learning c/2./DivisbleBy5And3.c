
#include <stdio.h>

int main()
{
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    if (x%3==0 && x%5==0) // x%15==0 yeh bhi kar skate hai kyunki jo dono he hoga voh he 15 se hoga.
    {
        printf("yes it is divisible by both 5 and 3");
    }
    else
    {
        printf("no it is not divisible by both 5 and 3");
    }

    return 0;
}
