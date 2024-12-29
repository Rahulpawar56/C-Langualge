//check number Factorial using reursion
#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact=1,sum=0,rem;
main()
{
	void Fact(int );
	int no;
	printf("\nEnter a number");
	scanf("%d",&no);
	
	Fact(no);
	
}
void Fact(int x)
{
	if(x!=0)
	{ 
	 fact=fact*x;
	 x--; 
	  Fact(x);
	}
	else
	{
		printf("\nFactorial of number is %d",fact);
	}
}