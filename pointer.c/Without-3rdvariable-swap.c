#include<stdio.h>
#include<conio.h>
void main()
{
	int i,*ptr,*ptr1,a,b;
	 ptr=&a;
	 ptr1=&b;
	 
	 printf("\nEnter a first number");
	 scanf("%d",&a);
	 printf("\nEnter a second number");
	 scanf("%d",&b);
	 
	 printf("\nBefore swapping %d %d\n",a,b);
	 
	 *ptr=*ptr^*ptr1;
	 *ptr1=*ptr^*ptr1;
	 *ptr=*ptr^*ptr1;
	 
	 printf("\nAfter swapping number %d %d",a,b);
	 
}