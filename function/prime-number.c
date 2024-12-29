//prime number using function
#include<stdio.h>
#include<conio.h>
void main()
{
 void prime(int);  //declaration
 int n;
 printf("\nENter a number = ");
 scanf("%d",&n);
 
  prime(n);  //calling
}
void prime(int x)
{
	int i,count=0;
	
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d prime number ",x);
	}
	else
	{
		printf("%d not prime number ",x);
	}
	
}