//binary search
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,l,r,mid,flag;
	printf("\nSize");
	scanf("%d",&size);
	int a[size];
	printf("\nnter a element ");
	for(i=0;i<5;i++)
	{
			scanf("%d",&a[i]);
	}
	l=0;
    r=size-1;
 
    
    while(l<=r)
    {
       mid=l+(r-l)/2;
	   
	   if(a[mid]==mid)	
	   
	   {
	   	flag=1;
	   	break;
	   }
	   
	   if(a[mid]<mid)
	   {
	   	l=mid+1;
	   }
	   else
	   {
	   	r=mid-1;
	   }
	}
	if(flag)
	{
		printf("\nFound");
	}
	else
	{
		printf("\nNot found");
	}

}