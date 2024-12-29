#include<stdio.h>
#include<conio.h>

float bmi(float a,float b)
{
 float c=a/(b*b);
 printf("\n%f\n",c);
 return c;	
}
 int main()
{
	float weight,height,n;
	printf("\nENter a weight in kg and height in meter = ");
	scanf("%f",&weight);
	scanf("%f",&height);
	n=bmi(weight,height);
	
	if(n<18.5)
	{
	printf("\nUnderweight %f",n);	
	}
	else if(n>18.5 && n<24.9)
	{
	 printf("\nNormal weight %f",n);
	}
	else if(n>=25 && n<29.9)
	{
	printf("\nOverweight %f",n);	
	}
	else
	{
		printf("\nobesity %f",n);
	}
 	
 }