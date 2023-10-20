// Checking Palindrome Numnber
#include <stdio.h>
int main() 
{
  int n, rev = 0, remaind, num1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num1 = n;
    while(n!=0)
    {
        remaind = n % 10;
        rev = rev * 10 + remaind;
        n =n/ 10;
    }
    if (num1== rev)
        printf("%d is a palindrome.", num1);
    else
        printf("%d is not a palindrome.", num1);

    return 0;
}
