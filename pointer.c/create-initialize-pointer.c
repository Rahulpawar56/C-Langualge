#include<stdio.h>
#include<conio.h>
void main()
{
	int i=10,*ptr;
	printf("\n\n");
	
	ptr=&i;
	printf("\n\t\tAddress of i %u",&i);
	printf("\n\t\tValue of ptr %u\n",ptr);
	printf("\n\t\tValue of a using ptr %d\n",*ptr);
	ptr++;
	printf("\n\t\tNow pointer shift on %u block \n",ptr);
	
	*ptr=500;
	printf("\n\t\tNow value of new block %d\n",*ptr);
	ptr++;
	printf("\n\t\tNow pointer shift on %u block",ptr);
	ptr=ptr-2;
	printf("\n\t\tNow pointer shift on previous block %u\n",ptr);
	
	
}