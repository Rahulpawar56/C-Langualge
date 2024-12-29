#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,mid,count,j;
	
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 count=0;
	for(i=0;i<size;i++)
	{ 
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
			count++;
	        }
//	        else{
//	        	count=1;
//			}
       }  
	}
	printf("Count Is : %d",count);
     mid=size/2;
     
     if(count>mid)
       {
       	printf("majority");
	   }
	   else
	   {
	   	printf("Not majority");
	   }
}
	
		 

