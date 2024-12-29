#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j;
	
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
	
	 j=a[i+1];
	 
	 for(i=0;i<size;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	{
	 	
	     printf("\n%d",a[i+j]%2);
		}
		 
	  }
	   
	 }

