#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr,i;
	int a[5]={10,20,30,40,50};
	ptr=a;
	
	 for(i=0;i<5;i++)
	 {
	 	printf("%d\t",*ptr);
	 }
}