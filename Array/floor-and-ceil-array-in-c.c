#include<stdio.h>
#include<conio.h>
void main()
{
  int size,ceil ,floor,i,last,n;
  
   printf("\nEnter a size of array");
   scanf("%d",&size);
   int a[size];
   printf("\nEnter a element ");
   
    for(i=0;i<size;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	 printf("\nGiven array\n\n");
	 for(i=0;i<size;i++)
	 {
	 	printf("%d\t",a[i]);
	 }
	  last=size-1; 
	 printf("\nEnter a number\n\n");
	  scanf("%d",&n);
	
	 for(i=0;i<size;i++)
	 {
	 	
	 	if(n<a[0])
	 	{
	 		floor=-1;
	 		ceil=a[0];
	 		break;
		 }
		 
		 if(a[last]<n)
		 {
		 	floor=a[last];
		 	ceil=-1;
		 	break;
		 }
		 
		 if(a[i]==n)
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
	 printf("\nfloor=%d\t ceil=%d",floor,ceil);
	 
}