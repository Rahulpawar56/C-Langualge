#include<stdio.h>
#include<conio.h>
int i=1,sum=0,j=1;
void main()
{
	void Perfect(int);
	int no;
	printf("\nEnter a number =");
	scanf("%d",&no);
	Perfect(no);
}
void Perfect(int x)
{
	if(i<x)
	{
      if(j<i)
		{
    	   if(i%j==0)
	         {
	        	sum=sum+j;
	         }
			 j++;
	         Perfect(x);
  	     }

   	   if(sum==i)
	   {
	   	printf("%d\t",i);
	   }
	      i++;
          sum=0;
           j=1;	
		Perfect(x);	   
    }
	 	
}