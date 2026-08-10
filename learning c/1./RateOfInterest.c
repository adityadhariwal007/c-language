#include<stdio.h>
int main ()


{float P,r,t,si;
    printf("Enter princpal :");
    scanf("%f",&P);
    printf("Enter time :");
    scanf("%f",&t);
    printf("Enter rate :");
    scanf("%f",&r);
si= (P*r*t)/100;
printf("simple interest will be : %f",si);
return 0;

    
}