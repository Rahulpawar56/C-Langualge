//find the sum of aarray using recursion using return
#include<stdio.h>
#include<conio.h>
int sum=0;
int main()
{
	int getSum(int [],int);
	int a[5],len,i;
	printf("\nENter a eleent on array =");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 len=sizeof(a)/sizeof(a[0]);
	 printf("\nLen %d",len);
	 int result=getSum(a,len);
	 printf("\nSum is %d",result);
} 
int getSum(int a[],int len)
{
	if(len!=0)
	{
		sum=sum+a[--len];
	    getSum(a,len);
	}
	else
	{
		return sum;
	}
}
