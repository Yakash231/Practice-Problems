// WAP to print a string in reverse using a pointer.

#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str[100], *ptr; 

	printf("Enter the string : "); 
	scanf("%s", str); 

	ptr = str; 

	printf("\nThe reverse of the string is : \n"); 
	for (int i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", *(ptr + i)); 
    }
	return 0; 
}