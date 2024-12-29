#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j;
	
	printf("\nEnter a size a array\n");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array\n");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 printf("\ngiven array\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
	 
	 printf("\nAfter reverse array \n");
	 int mid=size/2;
	 int last=size-1;
	 int first=0;
	 int temp;
	 	 
	  for(first=0;first<mid;first++)
	  
	  {
	  	
	   temp=a[first];
	   a[first]=a[last];
	   a[last]=temp;
	   last--;
	     
	     
	  }
	  for(i=0;i<size;i++)
	  {
	  	printf("\t%d",a[i]);
	  }
}
