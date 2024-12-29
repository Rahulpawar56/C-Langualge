//Enter a one number and find its floor and ceil
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,ceil,floor,n;
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\nGiven array is");
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 	
	 }
	int last=size-1;
	printf("\nEnter a number of ceil and floor");
	scanf("%d",&n);
	
	for(i=0;i<size;i++)
	{
		 
		 if(n<a[0])
		 {
		 	floor=-1;
		 	ceil=a[0];
		 	break;
		 }
		 
		 if(n>a[last])
		 {
		 	floor=a[last];
		 	ceil=-1;
		 	break;
		 }
		 
		 if(n==a[i])
		 {
		 	floor=a[i];
		 	ceil=a[i];
		 	break;
		 	
		 }
		 
		 if(a[i]<n && a[i+1]>n)
		 {
		 	floor=a[i];
		 	ceil=a[i+1];
		 	break;
		 }
	}
	printf("floor=%d\t ceil=%d",floor,ceil);
}