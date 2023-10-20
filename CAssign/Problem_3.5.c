// Area Of The Triangle.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter The Three Sides Of Triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe Area Of The Triangle: %.3f",area);
    return 0;
}