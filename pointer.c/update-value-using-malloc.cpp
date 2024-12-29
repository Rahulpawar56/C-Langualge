//update index using malloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int *ptr,size,index,value,i;
	printf("\nEnter size of array = ");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter a element of array = ");
	 for(i=0;i<size;i++)
	 
	 {
	 	scanf("%d",&ptr[i]);
	 }
	 
	 printf("\nEnter a serch index =");
	 scanf("%d",&index);
	 
	 printf("\nEnter a value to be updated=");
	 scanf("%d",&value);
	 
	ptr[index]=value;
	
	printf("\nAfter updating value = \n\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
		
	}
	 
}