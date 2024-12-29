//Read a text file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	
	ptr=fopen("C://Users//shree//Desktop//pawar.txt","r");
	if(ptr==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
	do{
	     ch=fgetc(ptr);
		printf("%c",ch);
		
	}while(ch!=EOF);
   }
}