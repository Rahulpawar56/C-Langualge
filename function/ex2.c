#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i;
	printf("\nENter a size of array ");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter a element in array ");
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
 int j;
 for(i=0;i<size;i++)
 {
 	for(j=i+1;j<size;j++)
 	{
 		if(a[i]>a[j])
 		{
 			int temp=a[i];
 			a[i]=a[j];
 			a[j]=temp;
		 }
	 }
 }
 for(i=0;i<size;i++)
 {
 	printf("%d\t",a[i]);
	  }	 
}