//write a program to count the vowel in text file
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	int count=0;
	FILE *ptr;
	ptr=fopen("C://Users//shree//Desktop//rahul.txt","r");
	if(ptr==NULL)
	{
		printf("\nFile not available ");
	}
	else
	{
		do
		{
	
	     ch=fgetc(ptr);
	     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	     count++;
       }while(ch!=EOF);
       printf("%d",count);
	}
	
}