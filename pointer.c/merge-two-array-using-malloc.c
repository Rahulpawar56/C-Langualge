//merge two array using malloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr1,*ptr2,*ptr3,i,size1,size2,size3;
	 printf("\nEneter a size of first array = ");
	 scanf("%d",&size1);
	 ptr1=(int*)malloc(sizeof(int)*size1);
	 
	  printf("\nEnter a element in array = ");
	    for(i=0;i<size1;i++)
	    {
	    	scanf("%d",&ptr1[i]);
		}
		
		printf("\nFirst array =\n\n");
		 for(i=0;i<size1;i++)
		 {
		 	printf("%d\t",ptr1[i]);
		 }
		 
	 printf("\nEnter a size of second array = ");
	scanf("%d",&size2);
	   ptr2=(int*)malloc(sizeof(int)*size2);
	   
	    printf("\nEnter a element in second array = ");
	     for(i=0;i<size2;i++)
	     {
	     	scanf("%d",&ptr2[i]);
	     	
		 }
		 
		 printf("\nSecond array = \n\n");
		  for(i=0;i<size2;i++)
		  {
		  	printf("%d\t",ptr2[i]);
		  }
		 size3=size1+size2;
		ptr3=(int*)malloc(sizeof(int)*(size1+size2)); 
	 int k=0;
	   for(i=0;i<size1;i++)
	   {
	   	ptr3[k]=ptr1[i];
	   	k++;
	   	
	   }
	   
	   for(i=0;i<size2;i++)
	   {
	   	ptr3[k]=ptr2[i];
	   	k++;
	   }
	  printf("\nAfter merging array = \n\n"); 
	 for(i=0;i<size3;i++)
	 {
	 	printf("%d\t",ptr3[i]);
	 }
}