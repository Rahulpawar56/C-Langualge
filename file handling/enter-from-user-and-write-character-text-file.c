// enter a character from user and write in text file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	
	ptr=fopen("C://Users//shree//Desktop//rahul.txt","w");
	if(ptr==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
		printf("\nENter a character");
		scanf("%c",&ch);
		fputc(ch,ptr);
	}
	fclose(ptr);
}
