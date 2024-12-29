//perfect number using recursion
#include<stdio.h>
#include<conio.h>
int i=1;
void main()
{
 void  Perfect(int );
	int no;
	printf("\nEnter a number = ");
	scanf("%d",&no);
  Perfect(no);
 
	
}
 void Perfect(int x)
{
	if(i<x)
	{
	   int j=1,sum=0;
	   if(j<i)
	   {
	    if(i%j==0)
	    {
	     	sum=sum+j;
		} 
	        j++;
	    
	   }
	     if(sum==i)
          {
           printf("%d",i);	
      	  }
      }
      
      i++;
      Perfect(x);
    
	  		
   
    
}