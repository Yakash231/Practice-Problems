#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    (a^=b),(b^=a),(a^=b);    
   printf("After Swappping:\n a:%d\nb:%d",a,b);
    return 0;
}