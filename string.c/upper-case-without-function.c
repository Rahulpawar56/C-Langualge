//uppercse string without function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch[90];
	int i=0,len;
	printf("\nENter a string ");
	gets(ch);
	
	int count=0;
	while(ch[i]!='\0')
	{
	     ++count;
	     i++;
	}
	printf("\nCount =%d\n",count);
	
	for(i=0;i<count;i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
	       ch[i]=ch[i]-32; 
		}
	}
 printf("%s",ch);

}
