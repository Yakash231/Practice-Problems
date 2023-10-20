#include<stdio.h>
int main(){
char ch;
printf("Enter The Value:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("\nLower Case");
else
printf("\nUpper Case");
return 0;   
}