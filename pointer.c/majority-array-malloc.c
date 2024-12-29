//check wheather element majority of not using malloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *ptr,size,i,skey;
	printf("\nEnter a size of array =");
    scanf("%d",&size);
    
     ptr=(int*)malloc(sizeof(int)*size);
     printf("\nEnter a element in array = ");
      for(i=0;i<size;i++)
      {
      	scanf("%d",&ptr[i]);
	  }
	  
	  printf("\nEnter value of search element = ");
	  scanf("%d",&skey);
	  int mid=size/2;
	  int count=0;
	   for(i=0;i<size;i++)
	   {
	   	if(skey==ptr[i])
	    	{
	   		count++;
		   }
	   }
	   if(count>mid)
	   {
	   	printf("\n %d Majority element ",skey);
	   }
	   else
	   {
	   	printf("%d  not majority element ",skey);
	   }
	
}