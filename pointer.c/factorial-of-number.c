//factorial of number using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,*ptr,fact=1;
	ptr=&no;
	printf("\nEnter a number= ");
	scanf("%d",&no);
	
	
	while(no!=0)
	{
		fact=fact*(*ptr);
	    no--;
	}
	
	printf("\nFactorial of number %d",fact);
 }