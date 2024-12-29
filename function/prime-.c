//Before and after prime number 
#include<stdio.h>
#include<conio.h>
main()
{
	int no,i=0,j=1,sum=0,count,b[3],k=0;
	printf("\nENter a numer = ");
	scanf("%d",&no);
     int before=0;
     for(i=0;i<no;i++)
     {  count=0;
       for(j=1;j<no;j++)
       {
       	if(i%j==0)
       	{
       		count++;
		 }
	   }
	  if(count==2)
	  {
	  b[k]=i;
	  k++;
	  
	  }
	  
	 }
	 printf("%d\t",b[k]);
	 
}