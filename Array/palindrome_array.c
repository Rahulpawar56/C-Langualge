#include<stdio.h>
#include<conio.h>
void main()
{
	 int size,last,mid,i;
	 
	 printf("\nEnter a size of array");
	 scanf("%d",&size);
	 
	  int a[size];
	  printf("\nEnter element");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  mid=size/2;
	  last=size-1;
	  
	  for(i=0;i<mid;i++)
	  {
	  	if(a[i]==a[last])
	  	{
	  		last--;
	  		
		  }
	  }
	  if(a[i]==a[last])
	  {
	  	printf("palindrome");
	  }
	  else
	  {
	  	printf("Not palindrome");
	  }
	  
	  }
	  
	  