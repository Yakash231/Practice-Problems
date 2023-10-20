// Count Number Digits.
#include <stdio.h>
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}


int main()
{
    int number;
    int count=0;

    printf("Enter any number :: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("\nTotal number of digits in [ %d ] are :: %d\n",number,count);

    return 0;
}
