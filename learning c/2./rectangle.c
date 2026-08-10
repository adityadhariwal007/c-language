#include <stdio.h>

int main() {
    
    int l, b, perimeter, area, difference;
    printf("what will be the length and breadth of the rectangle? ");
    scanf("%d,%d",&l,&b);

    perimeter= 2*(l+b);
    area= l*b;
    difference= area- perimeter;
    
    if (difference<0)
    { difference = difference *(-1);
        
    }
    
   


    if (area>perimeter)
    {printf("area is greater than perimeter by : %d",difference );}
    else{ printf("perimeter is greater than area by : %d", difference);}
    return 0;
}