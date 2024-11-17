#include<stdio.h>
int main()
{
    int x=30,*y,*z;
    y=&x;
    z=&y;
    
    *y++=z++;
    x++;
    printf("%d",x);
    printf("%d",y);
    printf("%d",z);
    return 0;
}