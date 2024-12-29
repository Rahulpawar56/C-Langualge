//swaap number using call by value
#include<stdio.h>
#include<conio.h>
main()
{
	void Swap(int ,int);
	int a,b;
	printf("\nEnter a value of a and b");
	scanf("%d%d",&a,&b);
    
    printf("\nBefore Swapping\t A=%d\tB=%d ",a,b); 
     Swap(a,b);
}
void Swap(int x,int y)
{
	printf("\nAfter swapping \t");
	int temp=x;
	x=y;
	y=temp;
	printf("X=%d \tY=%d",x,y);
}