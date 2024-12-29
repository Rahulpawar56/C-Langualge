//using malloc find max 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
{
	int *ptr,max,i,size;
	
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	
	 ptr=(int*)malloc(sizeof(int)*size);
	 printf("\nEnter a element in array = ");
	 
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&(ptr[i]));
	  }
	  
	  max=ptr[0];
	  for(i=0;i<size;i++)
	  {
	  	if(max<(ptr[i]))
	  	{
	  		max=(ptr[i]);
		  }
	  }
	  printf("max = %d",max);
}