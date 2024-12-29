//LCM of two numbers (List of commo Multiple)
#include<stdio.h>
#include<conio.h>
int i=1,lcm=1;
main()
{
int  LCM(int ,int);
	int no1,no2;
	printf("\nEntre a no1 and no2=");
	scanf("%d%d",&no1,&no2);
	int result=LCM(no1,no2);
	printf("\nLCM is %d",result);
}
 int LCM(int x,int y)
{
   if(x>=1 && y>=1)
   {
   	  if(x%i==0 && y%i==0)
		 {
		   lcm=lcm*i;
   	        x=x/i;
   	        y=y/i;
   	    }
   	      i++;
   	      LCM(x,y);  	      	
     }
   else
   {
   	 return lcm;
   }	
}