//write a program to read the file 
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
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
		  printf("%c",ch);	
			
		}while(ch!=EOF);
	}
	fclose(ptr);
}