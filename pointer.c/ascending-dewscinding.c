//ascending and desending oreder
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,*ptr,*ptr1;

	printf("\nEnter a  size of array = ");
	scanf("%d",&size);
	
	int a[size];
	ptr=a;
	
	printf("\nEnter a element in array=  ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	printf("\nGiven element =");
	for(i=0;i<size;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\nAscending order =\n\n");
	int j,temp;
	ptr1=&a[0];
	for(i=0;i<size;i++)
	{
	  for(j=i+1;j<size;j++)
		{
		  if(*(ptr+i)>*(ptr1+j))
		  {
		     temp=*(ptr+i);
		     *(ptr+i)=*(ptr1+j);
		     *(ptr1+j)=temp;
		  }
		  	
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
  
  printf("\nDescending order =\n");
   ptr1=&a[0];
   
	for(i=0;i<size;i++)
	{
	  for(j=i+1;j<size;j++)
		{
		  if(*(ptr+i)<*(ptr1+j))
		  {
		     temp=*(ptr+i);
		     *(ptr+i)=*(ptr1+j);
		     *(ptr1+j)=temp;
		  }
		  	
		}
	}
	for(i=0;i<size;i++)
	{	
		printf("%d",*(ptr+i));
		
	 }

}

