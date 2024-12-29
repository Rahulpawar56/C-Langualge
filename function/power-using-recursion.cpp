//using a base and index find the power using recursion 
#include<stdio.h>
#include<conio.h>
int p=1;
 main()
{
	void power(int ,int );
     int base,index;
     printf("\nEnter a base and index=");
     scanf("%d %d",&base,&index);
     
     power(base,index);
     getch();
}
void power(int base,int index)
{
	if(index!=0)
	{
	 p=p*base;
	 power(base,--index);
	 	
	}
	else
	{
		printf("\nPower is =%d",p);
	}
}