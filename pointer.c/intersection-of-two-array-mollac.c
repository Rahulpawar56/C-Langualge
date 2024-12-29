//interjection of two array using mollac function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int *ptr1,*ptr2,*ptr3,size1,size2,size3,i,j,count=0;
   printf("\nEnter a size of first array = ");
   scanf("%d",&size1);	
   
   ptr1=(int*)malloc(sizeof(int)*size1);
   printf("\nEnter a element of array = ");
   for(i=0;i<size1;i++)
   {
   	scanf("%d",&ptr1[i]);
   }
   
   printf("\nEnter a size of second array = ");
   scanf("%d",&size2);
   
   ptr2=(int*)malloc(sizeof(int)*size2);
   printf("\nEnter a element in second array = ");
     for(i=0;i<size2;i++)
     {
     	scanf("%d",&ptr2[i]);
	 }
	 
	 size3=size1+size2;
	 ptr3=(int*)malloc(sizeof(int)*(size1+size2));
	 int k=0;
	
	   	   for(i=0;i<size3;i++)
	   {
	   	printf("%d\t",ptr3[i]);
	   }
	   printf("\nAfter intersection = \n\n");
	   for(i=0;i<size3;i++)
	   {
	   	count = 1;
	   	for(j=i+1;j<size3;j++)
	   	{
	   			if(ptr3[i]==ptr3[j])
	   			{
	   				count++;
			    }
			    if(ptr3[i]==ptr3[j])
			    {
			    	ptr3[j] = -1;
				}
		}
		if(count==1)
		{
			ptr3[i] = -1;
		}
		
	}
	for(i=0;i<size3;i++)
	{
		
		   if(ptr3[i]!=-1)
		   {
	       		printf("%d\t",ptr3[i]);
	       }
	}
	       
	   
}