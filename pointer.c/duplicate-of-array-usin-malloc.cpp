
//find duplicate element using malloc function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 main()
{
	int *ptr,i,size,j;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	 ptr=(int*)malloc(sizeof(int)*size);
	 printf("\nEnter a element in array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&ptr[i]);
	  }
	  	  
	 for(i=0;i<size;i++)
	 {
	  for(j=i+1;j<size;j++)
	  {
	  	 if(ptr[i]>ptr[j])
	  	 {
	  	 	int temp=ptr[i];
	  	 	ptr[i]=ptr[j];
	  	 	ptr[j]=temp;
	      }
	   }	
	   
	 } 
	 
	 for(i=0;i<size;i++)
	 {
	 	if(ptr[i]==ptr[i+1])
	 	{
	 		printf("%d\t",ptr[i]);
		 }
     }	  
}