#include<stdio.h>
#include<math.h>


void sum(int *x,int *y)
{
    int s=*x+*y;
    printf("Sum: %d",s);
}
void sumofarray(int *v)
{

//int *v;
int s=0;
//v=c;
for(int i=0;i<10;i++)
{
    s=s+(*v++);
}
printf("Sum Of Elemnts: %d",s);
}
void reverse()
{
int c[5]={12,34,54,65,20};
int *v=c;
for(int i=4;i>=0;i--)
{
    v=&c[i];
    printf("%d ",*v);
}
 

}
void swap(int *x,int *y,int *z)
{
int t;
t=*x;
*x=*y;
*y=*z;

}

int main()
{
int a=5,b=10;
//sum(&a,&b);

printf("Enter The Array: ");
//int s=0;
/*int c[10];
for(int i=0;i<10;i++)
{
    scanf("%d",&c[i]);
}
sumofarray(&c[0]);*/
printf("Enter The Array: ");
reverse();
int a1,b1,c1;
a1=10,b1=20,c1=30;
//swap(&a1,&b1,&c1);
//printf("\nAfter Swaping:\n a1: %d\n b1:%d\n c1:%d",a1,b1,c1);
return 0;
}