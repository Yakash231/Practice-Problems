// Conversion: Fahrenheit To Celcius
#include<stdio.h>
int main(){
    float f;
    float c;
    printf("Enter The Temperature(in Celcius):");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The Temperature In Fahrenheit: %f",f);
    return 0;
}