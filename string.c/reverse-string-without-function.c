//reverse string without function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch[90];
	printf("\nENter a string ");
	gets(ch);
	
	int l=strlen(ch);
	int last=l-1;
	int mid=last/2;
	int first=0;
	
	for(first=0;first<=mid;first++)
	{
		int temp=ch[first];
		ch[first]=ch[last];
		ch[last]=temp;
		last--;
	}
	printf("%s",ch);
}
