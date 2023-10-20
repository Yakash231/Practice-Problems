#include<stdio.h>



struct time{
    int hrs,min,sec;

};

void sum(struct time t[0],struct time t[1])
{
    int s1=t[0].hrs+t[1].hrs;
    int s2=t[0].min+t[1].min;
    int s3=t[0].sec+t[1].sec;
    printf("Sum of Two Times Is: %dhrs %dmins %dsecs",s1,s2,s3);
}
int main()
{
    struct time t[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter The Hour: ");
        scanf("%d",&t[i].hrs);
        printf("Enter The Minute: ");
        scanf("%d",&t[i].min);
        printf("Enter The Seconds: ");
        scanf("%d",&t[i].sec);

    }
    sum(t[0],t[1]);
    return 0;
    



}