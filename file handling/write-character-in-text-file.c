//write a character in text file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch[10];
	
	ptr=fopen("C://Users//shree//Desktop//rahul.txt","w");
	if(ptr==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
	   fputc('a',ptr);
	}
	fclose(ptr);
}