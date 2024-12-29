//write a string in text file
#include<stdio.h>
#include<conio.h>
void main()
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
		fputs("Rahul Pawar",ptr);
		fputs("\n",ptr);
		fputs("Student of Shreeyash collage ",ptr);
		
	}
	fclose(ptr);
}