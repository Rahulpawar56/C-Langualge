//reverse in order
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,j,i,*ptr,*ptr1,*ptr2;
	printf("\nEnter a size of array= ");
	scanf("%d",&size);
	
	int a[size];
	ptr=a;
	printf("\nEnter a element in array = ");
	
	 for(i=0;i<size;i++)
	 {
	     scanf("%d",(ptr+i));
	 }
 	 
 	 printf("\nGiven array = \n\n");
 	 for(i=0;i<size;i++)
 	 {
 	 	printf("%d\t",*(ptr+i));
	  }

printf("\nReverse number = \n\n ");
 int last = size-1;
 int mid = last/2;
 int first=a[0];
 ptr1=first;
 ptr2=last;
 
  for(first=0;first<mid;first++)
  {

  	int temp=*(ptr+first);
  		*(ptr+first)=*(ptr+last);
  		*(ptr+last)=temp;
  		last--; 	
  }
   
    for(i=0;i<size;i++)
     {
    	printf("%d\t",*(ptr+i));
     }

	  
}