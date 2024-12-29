#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("\nEnter a size of array\t");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter a Element in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
    int Max=a[0]+a[1];
    int b=0;
    int c=1;
    for(i=0;i<n;i++)
    {
    	for(j=1+i;j<n;j++)
    	{
    		if((a[i]+a[j])>Max)
    		{
    			Max=a[i]+a[j];
    			b=i;
    			c=j;
			}
     	}
	}
	printf("\nMax sum of two Elment is =%d",Max);
	printf("\nElement %d\t%d",a[b],a[c]);
	
    
}