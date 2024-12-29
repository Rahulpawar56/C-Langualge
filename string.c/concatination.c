//concate string using function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch[90],p[90];
	printf("\nENter a string ");
	gets(ch);
	printf("\nENter a second string");
	gets(p);
   
    int rev=strcat(ch,p);
    printf("%s",rev);
	
}