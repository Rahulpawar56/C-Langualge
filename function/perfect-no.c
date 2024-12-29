//perfect number or not
#include<stdio.h>
#include<conio.h>
void main()
{
void per(int);  //declaration
  int n;
  printf("\nENter a number = ");
  scanf("%d",&n);
  
  per(n);  //calling
	
}
void per(int x)
{
  int i,sum=0;
    
   for(i=1;i<x;i++)
   {

   	 if(x%i==0)
   	 {
   	 	sum=sum+i;
   	 	
	 }
   }
   
   if(sum==x)
   {
   	printf("\n%d perfect number ",x);
   	
	}
	else
	{
		printf("\n%d not prime number ",x);
	 }  	
}
