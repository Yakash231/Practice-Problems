// Cslculate Power Using Functions.
#include<stdio.h>
int power(int a, int b);

int main()
{
  int num1, num2;

  printf("Enter base and power: ");
  scanf("%d %d",&num1, &num2);

  int result = power(num1, num2);
  printf("The result = %d", result);

  return 0;
}
int power(int a, int b)
{
  int result = 1;
  for(int i=1; i<=b; i++)
  {
    result *= a;
  }
  return result;
}
