#include<stdio.h>
int main()
{
    //int l;
 int a[10];
 //printf("Enter The Length: ");
 //scanf("%d",&l);
 printf("Enter The Numbers: ");
 for(int i=0;i<10;i++){
 scanf("%d",&a[i]);
 }
 /*printf("The Elemnts Are: ");
 for(int j=0;j<10;j++)
 {
    printf("%d ",a[j]);
 } */
 int n,num;
 for(int j=1;j<10;j++)
 {
 num=a[j];
 n=0;
 if(a[j]%2==0)
 {
    while(num!=0)
    {
        num/=10;
        n++;
    }
    if(n==3)
    {
        printf("%d ",a[j]);
    }
 }
 }  
 return 0;
}