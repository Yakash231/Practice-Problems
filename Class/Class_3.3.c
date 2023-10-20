#include<stdio.h>
int main(){
    float f,c;
    printf("Enter The Tempeerature:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("The Temperature In Celcius:%f",c);
    return 0;
}