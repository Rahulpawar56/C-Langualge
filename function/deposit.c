//Create a application for bank management system
#include<stdio.h>
#include<conio.h>
void main()
{
	void deposit(int);      //declaration 1 function
	int n;
	printf("\nEnter a deposit to be added money=");
	scanf("%d",&n);
	deposit(n);      //calling 1 function
	
	void withdraw(int);     //declaration 2 function
{
	int a;
	printf("\nEnter a withdraw ammount = ");
	scanf("%d",&a);
	
	withdraw(a);  //calling 2 function

//}

//void checkbalance(int);       //declaration 3 function
//{
	
	
}

void deposit(int x)    // definition
{
	printf("\nDeposit money  %d",x);
}

void withdraw(int y)
{

printf("\nWithdraw amount %d",y);

}
//void checkbalance(int z)
//{
//	printf("\n Available balance is %d",deposit(n)-withdraw(a));
//}
