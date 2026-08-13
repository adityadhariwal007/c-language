#include <stdio.h>

int main()
{
    int ram, shayam, ajay;
    printf("enter your age :");
    scanf("%d %d %d", &ram, &shayam, &ajay);
    if (ram > shayam)
    {
        if (ram > ajay)
        {
            printf("%d is oldest", ram);
        }
        else
        {
            printf("%d is oldest ", ajay);
        }
    }
    if (shayam > ram)
    {
        if (shayam > ajay)
        {
            printf("%d is oldest ", shayam);
        }
        else
        {
            printf("%d is oldest ", ajay);
        }

    }
    return 0;}