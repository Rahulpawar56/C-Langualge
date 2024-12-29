#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,size1,size2,size3;
	
	printf("\nEnter a size of first array");
	scanf("%d",&size1);
	int a[size1];
	printf("\nENtetr a element in array");
	
	 for(i=0;i<size1;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 printf("\nEnter a second array size");
	 scanf("%d",&size2);
	 int b[size2];
	 printf("\nEnter a element");
	 
	  for(i=0;i<size2;i++)
	  {
	  	scanf("%d",&b[i]);
	  }
	  size3=size1+size2;
	  int c[size3];
	  k=0;
	  
	   for(i=0;i<size1;i++)
	   {
	   	c[k]=a[i];
	   	k++;
	   }
	   
	    for(i=0;i<size2;i++)
	    {
	    	c[k]=b[i];
	    	k++;
		}
		printf("Display merge array:\n");
		for(i=0;i<size3;i++)
		{
			printf("%d",c[i]);
		}
	  
}