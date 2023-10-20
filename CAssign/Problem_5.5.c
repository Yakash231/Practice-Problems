#include<stdio.h>
int main(){
    int t1=0,t2=1;
    int nextterm,n;
    printf("Enter The Number Of Terms:\n");
    scanf("%d",&n);
   // printf("%d,",t2);
    for(int i=3;i<=n;i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    printf("%d,",nextterm);
    }
    return 0;

}