// Conversion: Given Quantity In kilometers And Meters
#include<stdio.h>
int main(){
    int m,m1,km;
    printf("Enter The Quantity In Meters:");
    scanf("%d",&m);
    m1=m%1000;
    km=m/1000;
    printf("\n%d meters is %d Kmilometers and %d meters",m,km,m1);
    return 0;
}