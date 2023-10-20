// Finding ncr Factor Using Function
#include <stdio.h>
 
int fact(int);  
 
int main()
{
  int n, r, ncr; 
 
  printf("\n Please Enter the Values for N and R: \n");
  scanf("%d %d", &n, &r);
  
  ncr = fact(n) / (fact(r) * fact(n-r));
  printf("\n ncr factorial of %d and %d = %d", n, r, ncr);
 
  return 0;
}
 
int fact(int num)
{ 
  int i; 
  int fact = 1;
 
  for (i = 1; i <= num; i++)
   {
     fact = fact * i;
   }
  return fact;
}
