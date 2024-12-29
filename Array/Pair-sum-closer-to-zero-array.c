//sum of close to number are zero

#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,sum,sum1;
	
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element:");
	
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&a[i]);
	  	
	  }
	  
	 printf("\nGiven array\n");
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("\t%d",a[i]);
	 	
	 }
	 sum=a[0]+a[1];
	 int m=0;
	 int n=1;
	 
	  for(i=0;i<size;i++)
	  {
	  	 for(j=i+1;j<size;j++)
	  	 {
	  	    sum1=abs(a[i]+a[i]);
			 
			 if(sum1<sum)
			 {
			 	sum=sum1;
			 	m=i;
			 	n=j;
			 	
			 }	
		 }
	  }
	  
	  printf("\nSum Of Closer to Arryay=%d and %d",a[m],a[n]);
	
	 
}