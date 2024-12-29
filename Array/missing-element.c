#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	int a[size];
	printf("\n enter Element of array =");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven element =");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
			int	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nMissing element is =");
	for(i=0;i<size-1;i++)
	{
		for(j=a[i]+1;j<a[i+1];j++)
		{
			printf("%d\t",j);			
		}
	}
	return 0;
}