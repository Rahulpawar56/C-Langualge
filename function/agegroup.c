#include<stdio.h>
#include<conio.h>
void main()
{
	void agegroup(int);
	int age;
	printf("\nEnter a age ");
	scanf("%d",&age);
	agegroup(age);
	
}
void agegroup(int x)
{
  if(x>=0 && x<6)
  {
  	printf("\nKids ");
  }	
  else if(x>=6&&x<14)
  {
  	printf("\nChild ");
  }
  else if(x >=14 && x<18)
  {
  	printf("\nTeaniger ");
  }
  else if(x>=18 && x<35)
  {
  	printf("\nYoung ");
  }
  else if(x>=35 && x<50)
  {
  	printf("\nAdult person");
  }
  else
  {
  	printf("\nSenoir citizen");
  }
  
}
