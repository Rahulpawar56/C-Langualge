#include<Stdio.h>
#include<conio.h>
void main()
{
	int i,j,count1=0,count2=0,a[3][3];
	printf("\nEnter a element in array");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
	
		for(j=0;j<3;j++)
		{
	  	
		 if(a[i][j]==0)
		 count1++;
		 else	
		 count2++;
		}
	}	
	if(count1>count2)
		printf("Sparse array");
	else 
	 printf("Not sparse array");
	
}