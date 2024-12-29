//WAP to sum of array using void sum(int *) function

#include<stdio.h>
#include<conio.h>
void main()
{
	void sum(int *);
	int a[5];
	printf("\nENter a element in array = ");
	for(int i=0;i<5;i++)
	{

		scanf("%d",&a[i]);
	}
	sum(a);
}

void sum(int *ptr)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{        
		sum=sum+ptr[i];
	}
	printf("\nSUM is %d",sum);

	}
                           