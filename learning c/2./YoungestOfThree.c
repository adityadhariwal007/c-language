#include <stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("enter the age ofram");
    scanf("%d", &ram);
    printf("enter the age ofshyam");
    scanf("%d", &shyam);
    printf("enter the age of ajay");
    scanf("%d", &ajay);
    if (ram < shyam && ram < ajay)
    {
        printf("%d is youngest abomg three. ", ram);
    }
    if (shyam < ram && shyam < ajay)
    {
        printf("%d is youngest abomg three. ", shyam);
    }
    if (ajay < shyam && ajay < ram)
    {
        printf("%d is youngest abomg three. ", ajay);
    }

    return 0;
}