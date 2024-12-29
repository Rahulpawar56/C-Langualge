//sum of array using malloc function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,sum=0,i,size;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter a element in array =");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	 
	 for(i=0;i<size;i++)
	 {
	   	sum=sum+(ptr[i]);
	 }	
	 
	 printf("\nSum of array = %d",sum);
}