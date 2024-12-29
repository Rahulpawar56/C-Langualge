//concatination string without inbuilt function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[90],c[90];
	char b[90];
	int i,count=0,count1=0,count3=0;
	printf("\nEnter first string\n");
	gets(a);
	
	printf("\nEnter a second string\n");
	gets(b);
	while(a[i]!='\0')
	{
		++count;
		i++;
	}
	while(b[count1]!='\0')
	{
		count1++;
		
	}
	count3=count+count1;
	int k=1;	
	for(i=0;i<count;i++)
	{
		c[k]=a[i];
		k++;
	
	}
	
	for(i=0;i<count1;i++)
	{
		c[k]=b[i];
		k++;
	}
	printf("%s",c);
}