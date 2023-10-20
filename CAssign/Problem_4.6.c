#include<stdio.h>
int main()
{
    int tm;
    printf("Enter The Total Marks: ");
    scanf("%d",&tm);
    if(tm==9)
    printf("The Grade Is: 0");
    else if (tm==8)
    printf("The Grade Is: E");
    else if(tm==7)
    printf("The Grade Is: A");
    else if(tm==6)
    printf("The Grade Is: B");
    else if(tm==5)
    printf("The Grade Is: C");
    else if(tm==4)
    printf("The Grade Is: D");
    else
    printf("FAIL");
    return 0;
    
}