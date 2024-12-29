//Fibonacci series using recursion
#include<stdio.h>
#include<conio.h>
int f=0,s=1,sum,i=0;
void main()
{
   void Fibonacci(int);
   int no;
   printf("\nENter a number = ");
   scanf("%d",&no);
   Fibonacci(no);	
}
void Fibonacci(int x)
{
	if(i<x)
	{
		printf("%d\t",sum);
		f=s;
		s=sum;
	  sum=f+s;
	   
	   i++;
	  Fibonacci(x);
	}
	
	
}