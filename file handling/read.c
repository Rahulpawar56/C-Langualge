#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	ptr=fopen("C://Users//shree//Desktop//rahul.txt","r");
	if(ptr==NULL)
	{
		printf("\nFile not available ");
	}
	else
	{
		printf("\nFile opened");
	}
}