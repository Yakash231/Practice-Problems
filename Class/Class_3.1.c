#include<stdio.h>
int main(){
    int x,y,z;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    z=x;
    x=y;
    y= z;
    printf("\nAfter Swapping");
    printf("x=%d",x);
    printf(" y=%d",y);
    return 0;
}