#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int i,j,n,*ptr1,*ptr2,size1,size2;
	printf("\nENter a size of 1 array =");
	scanf("%d",&size1);
	
	ptr1=(int*)malloc(sizeof(int)*size1);
	printf("\nENter a element = ");
	 for(i=0;i<size1;i++)
	 {
	  scanf("%d",&ptr1[i]);	
	 }
	 
	 printf("\nEnter a ize of 2 array = ");
	 scanf("%d",&size2);
	 
	 ptr2=(int*)malloc(sizeof(int)*size2);
	 printf("\nEnter a element in array = ");
	  for(i=0;i<size2;i++)
	  {
	  	scanf("%d",&ptr2[i]);
	  }
	  printf("\nintersection of two array: \n\n");
	  for(i=0;i<size1;i++)
	  { 
	  	for(j=0;j<size2;j++)
	  	{
	  		if(ptr1[i]==ptr2[j])
	  		{
				printf("%d\t",ptr2[j]);  
				ptr2[j]=0;
				
	        }
		  }
	  }
	  return 0;
	  
 }