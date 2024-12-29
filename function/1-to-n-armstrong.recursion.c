//1 to n Armstrong using recursion
#include<stdio.h>
#include<conio.h>
#include<math.h>

int i=1,j=1,count=0,rem,sum=0,p;
void main()
{
	void Arm(int);
	int no;
	printf("\nEnter a number=");
	scanf("%d",&no);
	Arm(no);
}
void Arm(int x)
{
      if(i<=x)
	{
		if(i!=0)
		{
		i=i/10;
		count++;
		Arm(x);
	    }

    	if(j<=x)
    	{
    	  if(j!=0)
    	   {
		 	rem=j%10;
	     	j=j/10;
	     	p=pow(rem,count);
		   sum=sum+p;
	      }
		   Arm(x);
        }
    
    
       	if(sum==x)
    	{
    		printf("%d\t",j);		
			sum=0;
			count=0;
		}
		i++;
		j++;
		Arm(x);
	}
	
  
     
}
     
     
     