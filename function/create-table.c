//WAP to create a table using recursion 
#include<stdio.h>
#include<conio.h>
void main()
{
	int table(int );
	int no;
	printf("\nENter a number by given table = ");
	scanf("%d",&no);
	
	table(no);	
}
int table(int x)
{
  for( int count=1;count<=10;count++)
  {
  	 if(count<=10)
       {
       	printf("%d\n",x*count);
	   }	

  }
}

