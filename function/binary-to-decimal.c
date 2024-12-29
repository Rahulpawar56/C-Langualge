//binary to decimal 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	void to_decimal(int no[]);   //declaration
	int no[5],i;
	printf("\nEnter a element i array=");
	for(i=0;i<5;i++)
	{
     	scanf("%d",&no[i]);
    }
    to_decimal(no);
		
}
void to_decimal(int a[])
{
    int i,count=0,rem,p,sum=0;
    for(i=0;i<5;i++)
    {  
       count =0;
        sum=0;
    	while(a[i]!=0)
    	{ 
    	
    	 rem=a[i]%10;
    	 a[i]=a[i]/10;
    	 p=pow(2,count);
    	   count++;
    	 sum=sum+rem*p;	
		}
 	printf("%d\t",sum);
}

}
