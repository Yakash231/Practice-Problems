// Square Root problem
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float d;
printf("Enter The Co-efficents Of The Quadratic Equations: ");
scanf("%d%d%d",&a,&b,&c);
printf("The Eauation Is: %dx2+%dx+%d",a,b,c);
d=sqrt((b*b)-4*a*c);
float D=(b*b)-(4*a*c);
float x1=(-b-d)/(2*a);
float x2=(-b+d)/(2*a);
printf("\nThe Determinant: %f",D);
printf("\nThe Roots Of Given Equation are\n x1: %f\n x2:%f ",x1,x2);
return 0;
}