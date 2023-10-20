#include<stdio.h>
int main()
{
 int min,max;
 printf("Enter the range: ");
 scanf("%d %d",&min,&max);
 printf("Even Numbers:\n");
 for(int i=min;i<=max;i++)
 {
   if(i%2==0){
    printf("%d,",i);
   }
 }
 printf("\nOdd Numbers:\n");
  for(int i=min;i<=max;i++)
 {
   if(i%2!=0)
   {
    printf("%d,",i);
   }  
 }  
return 0;
}