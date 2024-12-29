//Application for bank management system
#include<stdio.h>
#include<conio.h>
void main()
{
	void deposit(int);
	void wid(int);
	void display(int);
	 int c,n,b;
	 char ch;
	 printf("\nEnter a current balance = ");
	 scanf("%d",&b);
	  do{
	  	printf("\nEnter the choice = ");
	  	printf("\n1:Deposit money= ");
	  	printf("\n2:Withdraw money =");
	  	printf("\n3:Display the money =");
	  	scanf("%d",&n);
	  	switch(n)
	  	{
	  		case 1:
	  			deposit(c);
	  			break;
	  		case 2:
	  			wid(c);
				break;
			case 3:
				display(c);
				break;
			default:
				printf("\nEnter a wrong choice = ");			  		
		}
		printf("\nDo you want to continue = ");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	
}
  
  void deposit(int c)
  {
  	printf("\nEnter  a deposit money =");
  	scanf("%d",&c);
  	int b=b+c;
  	printf("\nYour money is deposited succesfully");
  }
  void wid(int c)
  {
  	printf("\nEnter a withdrawable money ");
  	scanf("%d",&c);
  	int b=b-c;
  	printf("\nYour money is withdraw succesfully ");
  }
  void display(int c)
  {int b;
  
  	printf("\nYour current balance is %d",b);
  }

