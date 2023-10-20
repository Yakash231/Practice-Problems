#include<stdio.h>
void compare(int *a,int*b)
{
    if(*a>*b)
    {
        printf("%d is greater than %d",*a,*b);
   }
   else if(*a<*b)
   {
    printf("%d is smaller than %d",*a,*b);
   }
   else
   {
    printf("Both numbers are Same.");
   }
}
 
 int main()
 {
    int c,d;
    printf("Enter the Numbers: ");
    scanf("%d,%d",&c);
    scanf("%d,%d",&d);
    compare(&c,&d);
    return 0;

}