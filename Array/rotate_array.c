#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i;
	
	printf("\nEnter a size");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 int pos;
	 printf("\nEnter a position");
	 scanf("%d",&pos);
	 
	  
	  for(i=pos;i<size;i++)
	  {
	  	printf("%d",a[i]);
	  }
	  
	  for(i=0;i<pos;i++)
	  {
	  	printf("%d",a[i]);
	  	
	  }
	
}