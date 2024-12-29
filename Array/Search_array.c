#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,flag=0,skey;
	
	printf("\nEnter a  size of array");
	scanf("%d",&size);
	
	 int a[size];
	 printf("\nEnter a element");
	 
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  
	 for(i=0;i<size;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 
	 printf("\nEnter a serch key");
	 scanf("%d",&skey);
	 
	  for(i=0;i<size;i++)
	  {
	  	if(a[i]==skey)
	  	{
	  		flag=1;
	  		break;
		  }
	  }
	  if(flag)
	  {
	  	printf("found element");
	  }

       else
	   {
	   	printf("\nNot found");
    	}	 
		
}