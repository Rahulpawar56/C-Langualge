#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i,size,sum=0,*ptr;
	printf("\nEnter a size of array");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	
	printf("\nEnter a elemnt in array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		sum=sum + ptr[i];
	}
	printf("\nSum=%d",sum);
}