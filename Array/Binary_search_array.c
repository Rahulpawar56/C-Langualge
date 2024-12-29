#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i;
	
	printf("\nEnter a size of array\n");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is\n");
	
	for(i=0;i<size;i++)
	{
		printf("\t%d",a[i]);
	}

}