#include<stdio.h>
#include<conio.h>
void main()
{
int call_bill(int);

	int call;
	printf("\nEnter a no of call");
	scanf("%d",&call);
	
	int result=call_bill(call);	
	printf("\nBill is %d",result);
	
}
int call_bill(int x)
{ int bill;

if(x>0 && x<=100)
{
	bill=200;
}	
else if(x>100 && x<=150)
{
	bill=200+(x*0.60);
}
else if(x>150 && x<=200)
{
	bill=200+(x*0.60)+(x*0.50);
}
else
{
	bill=200+(x*0.60)+(x*0.50)+(x*0.40);
}
return bill;
}