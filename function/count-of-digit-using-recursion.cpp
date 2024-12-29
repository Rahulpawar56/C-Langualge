//count digit using recursion 
#include<stdio.h>
#include<conio.h>
int count=0;
int main()
{
	void countDigit(int);
   	int no;
	printf("\nEnter a number =");
	scanf("%d",&no);
	
	countDigit(no);
}
void countDigit(int x)
{
	if(x!=0)
	{
		x=x/10;
		++count;
		countDigit(x);
	}
	else
	{
		printf("\nCount of digit is %d",count);
	}
}