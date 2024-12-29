//Fibonacci Series using recursion in c
#include<stdio.h>
#include<conio.h>
int a=0,b=1,c=0,i=1;
 int main()
 {
 	void Fibo(int);         //declaration
 	int n;
 	printf("\nEnter a Number\t");
 	scanf("%d",&n);
 	
 	Fibo(n);      //calling
	 
 	
};
void Fibo(int x)      //defination
{
	if(i<=x)
	{
		printf("%d\t",c);
		
		a=b;
		b=c;
		c=a+b;
		i++;
		Fibo(x); 
	}
}

