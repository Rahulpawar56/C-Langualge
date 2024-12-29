//cube using recursion
#include<stdio.h>
#include<conio.h>
int i=1,sum=1;
void main()
{
	void cube(int);  //declaration
	 int no;
	 printf("\nEnter a number = ");
	 scanf("%d",&no);
	 
     cube(no);  //calling
}
void cube(int x)   //definition
{

	if(i<=3)
	{
	sum=sum*x;
	 i++;
	cube(x);	
	}
	else
	{
	
	printf("\n cube %d",sum);
  }
}