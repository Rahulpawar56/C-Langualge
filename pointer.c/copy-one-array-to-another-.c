#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr,i,*ptr1;
	int a[5]={10,20,30,40,50};
	int b[5];
	ptr=&a;
	ptr1=&b;
	
	 for(i=0;i<5;i++)
	 {
	 	*ptr1=*ptr;
	 	printf("%d ......>%d\t\n",*ptr1,*ptr);
	 	ptr++;
	 	ptr1++;
	 	
	 }
	
}