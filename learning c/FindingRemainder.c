#include <stdio.h>

int main()
{
    int a, b, r, q;
    printf("what will be the divindend and the divisor? ");
    scanf("%d, %d", &a, &b);
    q = a / b;
    r = (a - b * q);
    printf("remainder will be : %d\n", r);
    printf("quoitent will be : %d\n", q);
    printf("the remainder will be %d when the divisor is %d and dividend is %d", r, b, a);
    return 0;
}