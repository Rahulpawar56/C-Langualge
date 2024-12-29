#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr,size,i,size2,*ptr2,*ptr3,size3;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter a element of array = ");
     for(i=0;i<size;i++)
     {
     	scanf("%d",&ptr[i]);
	 }
	 
	 printf("\nEnter a size of second array = ");
	 scanf("%d",&size2);
	 
	 ptr2=(int*)realloc(ptr,sizeof(int)*size2);
	 printf("\nEnter a element array in second array = ");
	  for(i=size;i<size2+size;i++)
	  {
	  	scanf("%d",&ptr2[i]);
	  	
	  }
	  
     for(i=0;i<size+size2;i++)
     {
     	printf("%d\t",ptr2[i]);
	 }
	
	
	
}