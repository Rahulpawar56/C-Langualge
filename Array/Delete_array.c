#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,index;
	
	printf("\nEnter a size of array\n");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	
	 for(i=0;i<size;i++)
	 {
	 	printf("%d\t",a[i]);
	 	
	 }
	 
	 printf("\nEnter a index");
	 scanf("%d",&index);
	
	 for(i=index;i<size-1;i++)
	 {
	 	a[i]=a[i+1];
	 }
	 for(i=0;i<size-1;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 
}