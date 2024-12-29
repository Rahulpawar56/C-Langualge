//reverse using function
#include<stdio.h>
#include<conio.h>
void main()
{
	void rev(int);
	int n;  //diclaration
	printf("\nENter a a number = ");
	scanf("%d",&n);
	 rev(n);  //calling
	
}
void rev(int x)
{
  int i,r=0,rem;  //definition
   while(x!=0)
   {
   	rem=x%10;
   	x=x/10;
   	r=r*10+rem;
	}
	printf("%d",r);
}