//Armstrong using recursion
#include<stdio.h>
#include<conio.h>
#include<math.h>
int rem,sum=0,p;
void main()
{
	int armstrong(int,int );
	int no,count=0;
	printf("\nEnter a number = ");
	scanf("%d",&no);
	int temp=no;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	
	int result=armstrong(no,count);
	if(result==no)
	{
		printf("\nArmstrong ");
	}
	else
	{
		printf("\nNot Armstrong");
	}
}
int armstrong(int x ,int count)
  {
	if(x!=0)
	{
	  rem=x%10;
	  p=pow(rem,count);	
	  sum=sum+p;
	  x=x/10;
	  armstrong(x,count);
	}
	else
	{
		return sum;
	}
	
	
}