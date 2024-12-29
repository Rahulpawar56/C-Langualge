//insert value in specific index using malloc 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,index,value,i,last,size;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter a element on array = ");
	 for(i=0;i<size-1;i++)
	 {
	 	scanf("%d",&ptr[i]);
	 }
	 
	printf("\nENter a index for add value= ");
	scanf("%d",&index);
	
	printf("\nEnter a value to be added = ");
	scanf("%d",&value);
	
	 last=size-1;
	  
	   for(i<last-1;i>=index;i--)
	   {
	   	  ptr[i+1]=ptr[i];
	   	
	   }
	    ptr[index]=value;
	   
	   printf("\nAfter insertion value = \n\n");
	    for(i=0;i<size;i++)
	    {
	    	printf("%d\t",ptr[i]);
		}
}