//palidrome or not
#include<stdio.h>
#include<conio.h>
int rem,rev=0;
int main()
{
	int Palindrome(int);
	int no;
	printf("\nEnter a number = ");
	scanf("%d",&no);

   int result=Palindrome(no);
   if(result==no)
    {
    	printf("\nPalindrome number ");
    	
	}
	else{
		printf("\n Not palindrome");
	}
	
}
int Palindrome(int x)
{
	if(x!=0)
	{
	rem=x%10;
	x=x/10;
	rev=rev*10+rem;	
	Palindrome(x);
	}
	else
	{
    	return rev;	
	}
}