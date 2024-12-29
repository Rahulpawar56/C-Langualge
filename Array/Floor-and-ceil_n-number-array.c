//Enter a  n number and find floor and ceil

#include<stdio.h>
#include<conio.h>
void main()
{
	int size,n,i,j,floor,ceil;
	
	printf("\nEnter a size of array ");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element ");
	
	 for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven element in array\n:");
	
	 for(i=0;i<size;i++)	 
	 {
	 	printf("%d",a[i]);
	 }
	 
	int  last=size-1;
	
	 for(n=0;n<9;n++)
	 {
	 	
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
	 	
	 	printf("\n%d=%d\t%d",n,floor,ceil);
	 }
	
}