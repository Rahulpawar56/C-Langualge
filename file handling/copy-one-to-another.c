//Copy one file to another file
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr1,*ptr2;
	char ch;
	
	ptr1=fopen("C://Users//shree//Desktop//rahul.txt","r");
	ptr2=fopen("C://Users//shree//Desktop//pawar.txt","w");
	
	if(ptr1==NULL)
	{
		printf("\nFile not available");
	}
	else
	{
		while((ch=fgetc(ptr1))!=EOF)
		{
			fputc(ch,ptr2);
		}
	}
	fclose(ptr1);
	fclose(ptr2);
}