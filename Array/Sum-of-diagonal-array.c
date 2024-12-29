#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum1=0,sum2=0;
	
	printf("\nEnter a element of array");
	
	
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
	 	 	
	 	 	if(i==j)
	 	 	{
	 	 	 sum1=sum1+a[i][j];
	 	 	
		    }
		    
		    if(i+j==2)
		    {
		    	sum2=sum2+a[i][j];
		    	
			}
		  }
	}
		  printf("\nsum1=%d",sum1);
		  printf("\nsum2=%d",sum2);
	 
}