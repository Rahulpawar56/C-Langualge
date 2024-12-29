//reverse string using function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch[90];
	printf("\nENter a string ");
	gets(ch);
   
    int rev=strrev(ch);
    printf("%s",rev);
	
}