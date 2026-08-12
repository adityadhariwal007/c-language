#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b)
    {printf("valid triangle");}
    else {printf("not a valid triangle");}
    
    
    
    return 0;
} 