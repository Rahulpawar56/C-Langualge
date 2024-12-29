#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,temp;
	
	printf("\nEnter a size of array\n");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter a element\n");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\nGiven array\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
	 
	 printf("\nAfter ascending array\n");
	 for(i=0;i<size;i++)
	 {
	 	for(j=i+1;j<size;j++)
	 	{
	 		if(a[i]>=a[j])
	 		{
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
	 			
			 }
		 }
	 }
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
}