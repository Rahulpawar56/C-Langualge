//armstrong number using function
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 void arm(int);  //declaration number
 	int n;
 	printf("\nENter a number=");
 	scanf("%d",&n);
 	
 	arm(n); //calling

}
void arm(int x)
{
	int i,sum=0,rem,count=0,p;
	int j=x;
	
	
	while(x!=0)
	{
		x=x/10;
		count++;
	}

	x=j;
   while(x!=0)
	{
	   rem=x%10;
	   x=x/10;
	p=pow(rem,count);
	    
	 sum=sum+p;
			
			
	}
	x=j;
	if(sum==x)
	{
		printf("%d armstrong number ",x);
		
	}
 else
 {
 	printf("%d not armstrong ",x);
	 }	
}