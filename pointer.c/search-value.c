#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,skey,flag=0,*ptr,*ptr1;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	
	int a[size];
	ptr=a;
	printf("\nEnter a element in array = ");
	for(i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
		
	}
	
	printf("\n Given array =\n\n ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(ptr+i));
	}

	printf("\nEnter a search value = ");
	scanf("%d",&skey);
	ptr1=skey;
	
	
	 for(i=0;i<size;i++)
	 {
	   	 if(*(ptr+i)==ptr1)
	   	 {
	   	 	flag=1;
	   	 	break;
		 }
	 }
	 
	  if(flag)
	  {
	  	printf("\nValue found %d ",*ptr+i);
	  	
	  }
	  
	  else
	  {
	  	printf("\nValue not found %d ",*ptr1);
	  }
}