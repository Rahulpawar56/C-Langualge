#include<stdio.h>
#include<conio.h>
main()
{
	FILE *ptr;
	if(remove("rahul.txt"==0))
	printf("\nSuccesfully deleted file");
	else
	{
	printf("\nNot deleted file");
	}
}