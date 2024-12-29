#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j, max;
	
	 
	 printf("\nEnter a size of array");
	 scanf("%d",&size);
	 
	 int a[size];
	 printf("\nEnter a element in array");
	 
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	 
	  max=a[0];
	  for(i=0;i<size;i++)
	  {
	  	if(a[i]>max)
	  	{
		  
	  	max=a[i];
	  }
	  
	  }
	  printf("\nmax %d\n",max);
	  
	  int max2;
	  max2=a[0];
	  for(i=0;i<max;i++)
	  {
	  	if(a[i]<max)
	  	{
	  	  
		   	if(max2<a[i])
		   	{
		   		max2=a[i];
			}
	  	}
	  	
	 }
	 printf("\nMax2 %d",max2);
}


