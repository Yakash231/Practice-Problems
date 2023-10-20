// Finding Perimeter Of Circle 
#include<stdio.h>
int main(){
    int rad;
    printf("Enter The Radius Of The Circle: ");
    scanf("%d",&rad);
    float pi=3.141;
    float per=2*pi*rad;
    printf("The Perimeter Of The Circle: %.4f m.",per);
    return 0;
} 