#include<stdio.h>
#include<conio.h>
void main()
{
	int i,*ptr,b,*ptr1;
	 i=8,b=4;
	 ptr=&i;
	 ptr1=&b;
	
	printf("Addition is%d\n",*ptr+*ptr1);
	printf("Sub is %d\n",*ptr-*ptr1);
	printf("Multiply is %d\n",*ptr*(*ptr1));
	printf("Div is %d\n",*ptr/(*ptr1));
	 
}