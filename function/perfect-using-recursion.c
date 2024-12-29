//perfect number using recursion
#include<stdio.h>
#include<conio.h>
int i=1,sum=0;
void main()
{
	int Perfect(int );
	int no;
	printf("\nEnter a number = ");
	scanf("%d",&no);
  int result=Perfect(no);
  if(result==no)
  {
  	printf("\nPerfect no");
  	
  }
  else
  {
  	printf("\nNot perfect");
  }
	
}
int Perfect(int x)
{
	if(i<x)
	{
	
	  if(x%i==0)
	  {
	  	sum=sum+i;  
	  }
		i++;
    	Perfect(x);	
	  		  
   }
	else
	{
		return sum;
	}
   
}