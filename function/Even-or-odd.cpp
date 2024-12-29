//even or odd using recursion
#include<stdio.h>
#include<conio.h>
main()
{
	void Check_no(int );
	int no;
	printf("\nEnter a number = ");
	scanf("%d",&no);
	Check_no(no);
}
void Check_no(int x)
{
	if(x%2==0)
	{
		printf("\nEven number");
	}
	else
	{
		printf("\nOdd Number");
	}
}