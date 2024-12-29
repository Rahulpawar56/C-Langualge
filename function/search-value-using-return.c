//search value using return (value found the return 1 and not found return -1) -1 print not found or 1 found .
#include<stdio.h>
#include<conio.h>
void main()
{
	int svalue(int a[],int );
     int value,a[5];
     printf("\nENter a element in array = ");
      for(int i=0;i<5;i++)
      {
      	scanf("%d",&a[i]);
	  }
	  
	  printf("\nENter a serch value = ");
	  scanf("%d",&value);
	  
	  int index=svalue(a,value);
	  if(index==-1)
	  {
	  	printf("\n%d Not found in the given array ",value);
	  }
	  else
	  {
	  	printf("\n%d Found in given array  ",value);
	  }
}
int svalue(int *ptr,int value)
{
	int flag=-1;
	
	for(int i=0;i<5;i++)
	{
		if(ptr[i]==value)
		{
			flag=1;
		}
	}
	return flag;
}