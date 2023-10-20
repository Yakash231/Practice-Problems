#include<stdio.h>
int main(){
    int rup,pai;
    printf("Enter The Value Of Paise:");
    scanf("%d",&pai);
    rup=pai/100;
    printf("\n %d Paise Is %d Rupees",pai,rup);
    return 0;
}