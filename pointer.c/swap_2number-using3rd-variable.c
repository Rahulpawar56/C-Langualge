#include<stdio.h>
#include<conio.h>
void main()
{
	int i,*ptr,*ptr1,*ptr2,a,b,c;
	ptr=&a;
	ptr1=&b;
	ptr2=&c;
	
	
	printf("\nEnter a first number");
	scanf("%d",&a);
	printf("\nEnter a second number");
	scanf("%d",&b);
	printf("\nbefore a swapping number %d %d\n",a,b);
	
	*ptr2=*ptr;
	*ptr=*ptr1;
	*ptr1=*ptr2;
	
	printf("\nAfter swapping number %d %d",*ptr,*ptr1);
}