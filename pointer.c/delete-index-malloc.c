//delete index using malloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,size,index,i;
	printf("\nEnter a size of array= ");
    scanf("%d",&size);
    
    ptr=(int*)malloc(sizeof(int)*size);
    printf("\nEnter a element in array = ");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&ptr[i]);
     	
	 }
	 
	printf("\nENter a delete index =");
	scanf("%d",&index );
	
	 for(i=index;i<size;i++)
	 {
	 	ptr[i]=ptr[i+1];
	 }
	 
	 for(i=0;i<size-1;i++)
	 {
	 	printf("%d\t",ptr[i]);
	 }
}