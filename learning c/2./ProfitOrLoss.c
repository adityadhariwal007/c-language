#include <stdio.h>

int main() {
    int cp, sp,fp;
    printf("what will be the cost price and selling price of the product");
    scanf("%d \n%d",&cp,&sp);

    fp= (sp-cp);
    if (fp>0)
    {printf("congrats you got a profit of : %d",fp);}
    else if (sp==cp)
    {printf("you got nothing baby");
        /* code */
    }
    
    else{printf("do some work lazy pig because you are in loss of : %d", fp);}
        
    
    
    return 0;
}