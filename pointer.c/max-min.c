//max and min 
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,max,min,*ptr;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	int a[size];
	ptr=&a;
	printf("\nEnter a element of array = ");

    	for(i=0;i<size;i++)
    	{
    		scanf("%d",(ptr+i));
     	}
     	
     printf("\nGiven array =\n\n");
	  for(i=0;i<size;i++)
	  {
	  	 printf("%d\t",*(ptr+i));
	  }	
	  
	  max=a[0];
	  for(i=0;i<size;i++)
	  {
	  	for(j=i+1;j<size;j++)
	  	{
	  	  	
	  	  	if(*(ptr+j)>*(ptr+i))
	  	  	{
	  	  	 max=*(ptr+j);	
			}
	    }
	  }
	  printf("\n\nMaximum number is = %d",max);
	  
	  min=a[0];
	  
	   for(i=0;i<size;i++)
	   {
	   	for(j=i+1;j<size;j++)
	   	{
	   		if(*(ptr+j)<*(ptr+i))
	   		{
	   			min=*(ptr+j);
			}
	   		
		}
	}
	printf("\n\nMinimum number is = %d",min);
}