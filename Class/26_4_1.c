// WAP to count vowels and consonants in a string using pointer.

#include <stdio.h>
#include <string.h>
int main()
{
	char string[50];
	int vcount, ccount;
	vcount = ccount = 0;
	printf("Enter a string : ");
	scanf("%s", string);
	char *ptr;
	ptr = string;
	while (*ptr != '\0') {
		if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
			vcount++;
		else
			ccount++;
		ptr++;
	}
	printf("\nNumber of vowels in the string : %d\n", vcount);
	printf("Number of consonants in the string : %d\n", ccount);
	return 0;
}