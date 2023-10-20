#include<stdio.h>
int main()
{
 int a[10];
 printf("Enter The Numbers: ");
 for(int i=0;i<10;i++){
 scanf("%d",&a[i]);
 }
 int largest;
 for(int i=0;i<10;i++)
 {
    if(a[i]%2==0)
    {
        a[i]=largest;
        break;
    }
 }  
 for(int j=0;j<10;j++)
 {
    if(a[j]%2==0)
    {
        if(a[j]>largest)
        {
            largest=a[j];
        }
    }
 }
 printf("The Largest Even Number: %d",largest);
 return 0;
}