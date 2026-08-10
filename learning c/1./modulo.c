#include <stdio.h>
int main(){
int a,b,q,r;
printf("what will be the dividend and the divisor?");
scanf("%d %d",&a,&b);
r= a%b;                  //a % b = a if (a<b)
printf("%d",r);
return 0;

}