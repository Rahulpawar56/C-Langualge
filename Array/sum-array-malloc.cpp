//using malloc function sum of array
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
main()
{
	int i,size,sum=0,*ptr;
	printf("\nEnter a bize of array");
	scanf("%d",&size);
	size=(int)malloc(sizeof(int) *size);
	
	printf("\nEnter a array element ");
	for(i=0;i<size;i++)
	{
	   scanf("%d",ptr[i]);	
	}
	
	for(i=0;i<size;i++)
	{
		if(i<size)
		{
			sum=sum+a[i];
		}
	}
	printf("Sum %d",sum);
}