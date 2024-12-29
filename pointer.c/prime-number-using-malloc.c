//prime number of array usin malloc function
#include<stdio.h>
#include<conio.h>
void main()
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
	  	int count=0;
	  	for(j=1;j<=ptr[i];j++)
	  	{
	  		if(ptr[i]%j==0)
	  		{
	  			count++;
			  }
		  }
		  if(count==2)
		  {
		  	printf("%d\t",ptr[i]);
		  }
	  }
}