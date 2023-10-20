#include<stdio.h>



struct time{
    int hrs,min,sec;

};

void sum(struct time t1,struct time t2)
{
    int s1=t1.hrs+t2.hrs;
    int s2=t1.min+t2.min;
    int s3=t1.sec+t2.sec;
    if(s3>60)
    {
        s2++;
        s3=s3-60;
    }
    if(s2>60)
    {
        s1++;
        s2=s2-60;

    }
    printf("Sum of Two Times Is: %dhrs %dmins %dsecs",s1,s2,s3);
}
int main()
{
    struct time t1,t2;
   printf("Enter the hours: ");
   scanf("%d",&t1.hrs);
      printf("Enter the minute: ");
   scanf("%d",&t1.min);
      printf("Enter the seconds: ");
   scanf("%d",&t1.sec);
      printf("Enter the hours: ");
   scanf("%d",&t2.hrs);
      printf("Enter the minute: ");
   scanf("%d",&t2.min);
      printf("Enter the Seconds: ");
   scanf("%d",&t2.sec);

    sum(t1,t2);
    return 0;
    



}