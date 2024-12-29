//insert a element on specific index of array
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,*ptr,si,value;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	int a[size];
	ptr=&a;
	printf("\nEnter a element in array = ");
	 for(i=0;i<size-1;i++)
	 {
	 	scanf("%d",(ptr+i));
	 }
  
  printf("\nGiven array =\n\n ");
   for(i=0;i<size-1;i++)
   {
   	 printf("%d\t",*(ptr+i));
	}	 
	
	printf("\nEnter a index = ");
	scanf("%d",&si);
	
	printf("\nEnter a value to be added = ");
	scanf("%d",&value);
	
	 for(i=size-1;i>=si;i--)
	 {
	 	*(ptr+i+1)=*(ptr+i);
	
	 }
	 
	 a[si]=value;
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("%d\t",*(ptr+i));
	 }
	
}