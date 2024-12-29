#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("Enter the array values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	 {
	 	  for(j=i+1;j<5;j++)
	 	     {
	 	     	  if(a[i]>a[j])
	 	     	  {
	 	     	  	int temp=a[i];
	 	     	  	a[i]=a[j];
	 	     	  	a[j]=temp;
	 	     		}
			  }
	 }
	printf("Missing Element:\n");
	 for(i=0;i<5;i++)
	 {
	 	 for(j=a[i]+1;j<a[i+1];j++)
	 	 {
	 	 	printf("%d\t",j);
		  }
	 }
	 return 0;
}