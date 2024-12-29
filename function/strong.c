//strong number or not using function
#include<stdio.h>
#include<conio.h>
void main()
{
	void strong(int);    //declaration
	int n;
	printf("\nENter a number =");
	scanf("%d",&n);
	
	strong(n);    //calling
	
}
void strong(int x)
{
	int i,fact=1,rem,sum=0;
	  int j=x;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		 fact=1;
		 while(rem!=0)
		 {
		 	fact=fact*rem;
		    rem--;
	     }
	  sum=sum+fact;
	}
	printf("sum %d\n",sum);
	x=j;
	if(sum==x)
	{
		printf("%d strong number ",x);
	}
	else
	{
		printf("%d not strong ",x);
	}
}