//swap number using call by reference
#include<stdio.h>
#include<conio.h>
void main()
{
	void Swap(int* ,int*);
     int a,b;
     printf("\nENter a two numers =");
     scanf("%d%d",&a,&b);
     
     Swap(&a,&b);
     printf("A=%d\tB=%d\n",a,b);
}
void Swap(int *x,int *y)

{
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("X=%d\tY=%d\n",*x,*y);
}
