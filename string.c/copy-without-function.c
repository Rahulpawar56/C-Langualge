//copy one string to another without function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[90],b[90];
	int i,count1=0;
	printf("\nENter a string \n");
	gets(a);
	
	printf("\nENter a second array\n");
	gets(b);
	
	while(b[count1]!='\0')
	{
		count1++;
		
	}
	
	for(i=0;i<count1;i++)
	{
		a[i]=b[i];
	}
	printf("%s",a);
}