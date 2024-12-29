#include<stdio.h>
#include<conio.h>
int i=1,sum=0;
void main()
{
	void Natural(int);
	int no;
	printf("\nENter a number =");
	scanf("%d",&no);
	Natural(no);
	
}
void Natural(int x)
{
	if(i<=x)
	{
		printf("%d\t",i);
		i++;
		Natural(x);
	}

	
}