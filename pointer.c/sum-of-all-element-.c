//sum of all element 
#include<stdio.h>
#include<conio.h>
void main()
{
  int size,i,sum=0,*ptr,*ptr1;
  printf("\nEnter a size of array =");
  scanf("%d",&size);
  int a[size];
  ptr=&a;
  
  printf("\nEnter a element in array = ");
  for(i=0;i<size;i++)
  {
  	scanf("%d",(ptr+i));
  }
  
  printf("\nGiven element of array =\n\n");
    for(i=0;i<size;i++)
    {
    	printf("%d\t",*(ptr+i));
	}

    for(i=0;i<size;i++)
    {
    	sum=sum+(*(ptr+i));
	}
   printf("\n\nSum of all element = %d ",sum);	
}