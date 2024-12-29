#include<stdio.h>
#include<conio.h>
main()
{
	int i,no;
	printf("\nENter  a size of array\n");
	scanf("%d",&no);
	int a[no];
	
	printf("\nEnter a element in array\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nOriginal Array Elment :");
	for(i=0;i<no;i++)
	{
		printf("\t%d",a[i]);
	}
	
	for(i=0;i<no;i++)
	{
		if(a[i]>a[i+1])
		{
			int temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			i=-1;
		}
	}
	printf("\nAfter Ascending order:");
	for(i=0;i<no;i++)
	{
		printf("\t%d",a[i]);
	}
	
}