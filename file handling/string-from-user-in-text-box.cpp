//Enter a string  from user in text file
#include<stdio.h>
#include<conio.h>
main()
{
	FILE *ptr;
	char ch[100];
	
	ptr=fopen("C://Users//shree//Desktop//rahul.txt","w");
	if(ptr==NULL)
	{
		printf("\nFile is not available");
		
	}
	else
	{
	  printf("\nENter a Character ");
	  gets(ch);
	  fputs(ch,ptr);
	}
	fclose(ptr);
}