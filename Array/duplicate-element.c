#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,flag=0;
	printf("\nEnter a size of array");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter a element in array\n");
	for(i=0;i<n;i++)
	{
    	scanf("%d",&a[i]);
	}
	
	printf("\nDuplicate Element is=");
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   	  if(a[i]==a[j])
   	  {
   	  		printf("%d",a[j]);
	  }
   	
    }
   }
  
	
}