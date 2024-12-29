//ceiling in sorted array
#include<stdio.h>
#include<conio.h>
 int main()
{
	int size,i,j,n,floor,ceil;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	 int a[size];
	 printf("\nEnter a element in array ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  
	printf("\nGiven array = \n\n");
	
	 for(i=0;i<size;i++)
	 {
	    printf("%d\t",a[i]);	
	 }
	 
	 printf("\nEnter a number to find floor and ceil = ");
	 scanf("%d",&n);
	 int last=size-1;
	 
	  for(i=0;i<size;i++)
	  {
	  	 if(n<a[0]);
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
		   
		   if(a[i]<n && n<a[i+1])
		   {
		   	floor=a[i];
		   	ceil=a[i+1];
		   	break;
		   }
     }
	 
	 printf("\nFloor=%d\t ceil=%d",floor,ceil);
}
