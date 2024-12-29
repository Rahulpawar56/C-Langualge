#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,rem;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter element in array =");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int size1=size;
	int b[size1];
	
	 for(i=0;i<size1;i++)
	 {
	   int count=0;
	   while(a[i]!=0)
	   {
	   	rem=a[i]%10;
	   	a[i]=a[i]/10;
	   	b[size1]=rem;
	   	count++;
	   	
	    }
    
	}
	for(i=0;i<size1;i++)
	{
		printf("%d",a[i]);
	}
}
 