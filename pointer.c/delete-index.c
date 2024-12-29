#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,index,*ptr;
	printf("\nEnter a size of element =");
	scanf("%d",&size);
	
	 int a[size];
	 ptr=&a;
	 printf("\nEnter a element of array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  }
	  
	  printf("\nGiven array = \n\n");
	    for(i=0;i<size;i++)
	    {
	    	printf("%d\t",*(ptr+i));
	    	
		}
	 
	 printf("\nEnter a deleted index = ");
	 scanf("%d",&index);
	 
	 for(i=index;i<size-1;i++)
	 {
	    *(ptr+i)=*(ptr+i+1);
	 }	
	 printf("\nAfter deleting index = \n\n");
	   for(i=0;i<size-1;i++)
	   {
	   	printf("%d\t",*(ptr+i));
	   }
		
}