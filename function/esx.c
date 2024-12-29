#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	void Arm(int );
	int no;
	printf("\nenter a number =");
	scanf("%d",&no);
	Arm(no);
}
void Arm(int x)
{
	int sum,count,i=1,temp,rem,p;
	while(i<x)
	{
		sum=0;
		count=0;
		temp=i;
		 while(i!=0)
		 {
		 	i=i/10;
		 	count++;
		 }
		 i=temp;
		 while(i!=0)
		 {
		 	rem=i%10;
		 	i=i/10;
		 	p=pow(rem,count);
		 	sum=sum+p;
		  }
		
		 i=temp;
		 if(sum==i)
		 {
		 	printf("%d\t",i);
		 }
		 i++;
	
	}
   		 
	

}