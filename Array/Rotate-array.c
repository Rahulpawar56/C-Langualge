#include<stdio.h>
#include<conio.h>
void main()
{
	int size,size2,si,i,j=0,*ptr,*ptr1;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	int a[size];
	ptr=a;
	printf("\nEnter a  element in array = ");
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",(ptr+i));
	 }
	 printf("\n\nGiven array = \n\n");
	  for(i=0;i<size;i++)
	  {
	  	printf("%d\t",*(ptr+i));
	  }
	  
	printf("\nEnter a search index = ");
   	scanf("%d",&si);	
	
	
	printf("\n\nAfter rotate array = \n\n");
	 size2=size;
	int b[size2];
	ptr1=&b;

	j=0;
	
	for(i=si;i<size;i++)
	{
		*(ptr1 + j)=*(ptr+i);
		 j++;
	}
	
	for(i=0;i<si;i++)
	{
		*(ptr1+j)=*(ptr+i);
		j++;
	}
	
	for(i=0;i<size2;i++)
	{
		printf("%d\t",*(ptr1+i));
	}
}