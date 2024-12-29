#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	printf("\nEnter a element in array");
	
	 for(i=0;i<3;i++)
	 { 
     	 for(j=0;j<3;j++)
	    {
	 
	      scanf("%d",&a[i][j]);	
	    }
	    printf("\n");
     }
     
	 for(i=0;i<3;i++)
	 {
	 	sum=0;
	 	for(j=0;j<3;j++)
	 	{
	 		printf("\t%d",a[i][j]);
	 		sum=sum+a[i][j];
	 		
	    } 
		printf("\t=%d",sum);
	   
		printf("\n");
	 }
	 
	 
}