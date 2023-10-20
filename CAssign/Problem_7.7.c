// Generating Prime Numbers.
#include <stdio.h>
int isPrime(int num);
void printPrimes(int ll, int ul);



int main()
{
    int ll, ul;
    
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &ll, &ul);
    printPrimes(ll, ul);
    
    return 0;
}

void printPrimes(int ll, int ul)
{
    printf("All prime number between %d to %d are: ", ll, ul);
    
    while(ll <= ul)
    {
        if(isPrime(ll))
        {
            printf("%d, ",ll);
        }        
        ll++;
    }
} 
int isPrime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {      
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}
