//find max  using void getmax(int*) function using return 
#include<stdio.h>
#include<conio.h>

void main()
{
int getmax(int *);     // declaration
     int a[5];
     printf("\nENter a element in array = ");
      for(int i=0;i<5;i++)
      {
      	scanf("%d",&a[i]);
	  }
	
	int result=getmax(a);      //calling
	printf("\nMax is %d",result);
	
}
 int getmax(int *ptr)
{   
    int max=ptr[0];
	for(int i=0;i<5;i++)
	{
		if(ptr[i]>max)
		{
			max=ptr[i];
		}
	}
  return max;
}

