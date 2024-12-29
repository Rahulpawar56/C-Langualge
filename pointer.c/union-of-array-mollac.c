//find union using malloc function
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr1,*ptr2,*ptr3,size1,size2,i,k;
	printf("\nEnter a size of first array = ");
	scanf("%d",&size1);

	ptr1=(int*)malloc(sizeof(int)*size1);
	 printf("\nENter a element in array first =");
	  for(i=0;i<size1;i++)
	  {
	  	scanf("%d",&ptr1[i]);
	  }
	  
	  printf("\nEnter a size of second array = ");
	  scanf("%d",&size2);
	  
	  ptr2=(int*)malloc(sizeof(int)*size2);
	  printf("\nEnter a element on second array =");
	   for(i=0;i<size2;i++)
	   {
	   	scanf("%d",&ptr2[i]);
	   }
	  
	  int j,temp;
	  int size3=size1+size2;
	  ptr3=(int*)malloc(sizeof(int)*(size1+size2));
	  k=0;
	  for(i=0;i<size1;i++)
	  {
	  	ptr3[k]=ptr1[i];
	  	k++;
	  }
	 
	  for(i=0;i<size2;i++)
	  {
	  	ptr3[k]=ptr2[i];
	  	k++;
	  	
	  }
	  
	  for(i=0;i<size3;i++)
	  {
	  	printf("%d\t",ptr3[i]);
	  }
	  
	
	for(i=0;i<size3;i++)
	  {
	  	for(j=i+1;j<size3;j++)
	  	{
	
	     	if(ptr3[i]>ptr3[j])
	     	{
	  	      temp=ptr3[i];
	  	      ptr3[i]=ptr3[j];
	  	      ptr3[j]=temp;
		    }
		}
	  }
	  

   	 printf("\nAfter sorting array = \n\n");
     for(i=0;i<size3;i++)
	 {
	 	
	 	printf("%d\t",ptr3[i]);
     }
     
    printf("\nUnion of array =\n\n ");
     for(i=0;i<size3;i++)
     {
     	if(ptr3[i]!=ptr3[i+1])
     	{
     		printf("%d\t",ptr3[i]);
		 }
	 }

}