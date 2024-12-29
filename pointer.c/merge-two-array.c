#include<stdio.h>
#include<conio.h>
void main()
{
	int size1,size2,i,j,*ptr,*ptr1,*ptr2;
	printf("\nEnter a size of array one =");
	scanf("%d",&size1);
	
	int a[size1];
	ptr=a;
	printf("\nENter element in array =");
	for(i=0;i<size1;i++)
	{
		scanf("%d",(ptr+i));
		
	}
	printf("\nFirst array =\n\n");
	for(i=0;i<size1;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	
	printf("\nEnter size of second array =");
	scanf("%d",&size2);
	
	int b[size2];
	ptr1=b;
	
	printf("%\nEnter a element of second array=" );
	for(i=0;i<size2;i++)
	{
		scanf("%d",(ptr1+i));
	}
	
	printf("\nSecond array = \n\n");
	for(i=0;i<size2;i++)
	{
		printf("%d\t",*(ptr1+i));
	}
	printf("\n\nAfter merging array =\n\n");
	
	int size3=size1+size2;
	int c[size3];
	ptr2=c;
	 j=0;
	
	 for(i=0;i<size1;i++)
	 {
	     *(ptr2+j)=*(ptr+i);
	 	  j++;
	 }
	
	for(i=0;i<size2;i++)
	{
		*(ptr2+j)=*(ptr1+i);
		 j++;
	}
	
	for(i=0;i<size3;i++)
	{
		printf("%d\t",*(ptr2+i));
	}
}