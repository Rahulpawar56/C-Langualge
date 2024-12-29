//Before and after prime number 
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=0,j=1,sum=0;
	printf("\nENter a numer = ");
	scanf("%d",&no);
	 for(i=0;i<no;i++)
	 {
	 	for(j=0;j<no;j++)
	 	{
	 		if(i%j==0)
	 		{
	 		  count++;	
			 }
		 }
		 if(count==2)
		 {
		 	printf("%d\t",a[i]);
		 }
		 
	 }
	 
}