//frequency of the number
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,count,i,j;
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 	
	 }
	 
	 printf("\nGiven element in array\n");
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("\n%d\n",a[i]);
	 	
	 }
	 
	 
	
	 for(i=0;i<size;i++)
	 {
	   if (a[i]==a[i+1])
	   	{
		   
	   	  count++;
	   	  
	    }
	    else
	    {
	    	printf("%d...>%d\n",a[i],count);
	    	count=1;
	    	
		}
	    
	   }
	   	 	
	 }
	