//Max and min using function 
#include<stdio.h>
#include<conio.h>
int max=0,j=0;
 main()
{
	void MaxMin(int []);
	int a[5],i;
	printf("\nENter a elemnt in array =");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	MaxMin(a);
}
   void MaxMin(int a[])
   {
	
	if(j<5)
	{
		if(a[j]>max)
		{
		max=a[j];
     	}
     	j++;
		MaxMin(a);
	}
	
     
     
	else
	{
		printf("\nMax is %d",max);
	}
}