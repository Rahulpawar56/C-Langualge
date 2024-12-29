//move all zero element to the last of array
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,*ptr;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	 int a[size];
	 ptr=&a;
	 printf("\nEnter a element in array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  	
	  }
	 
	 int c[size];
	 int j=0;
	 
	  for(i=0;i<size;i++)
	  {
	  	if(*(ptr+i)!=0)
	  	{
	  		c[j]=*(ptr+i);
	  		j++;
			  	
		 }
	  }
	  for(i=0;i<size;i++)
	  {
	  	if(*(ptr+i)==0)
	  	{
	  		c[j]=*(ptr+i);
	  		j++;
		  }
	  }
  for(i=0;i<size;i++)
  {
  	printf("%d\t",c[i]);
	  }	
}