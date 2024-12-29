//find majority in program
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,*ptr;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	int a[size];
	ptr=&a;
	printf("\nEnter a element in array = ");
	 for(i=0;i<size;i++)
     {
	 	scanf("%d",(ptr+i));
	 }                                                                                                           
                               
	 printf("\nGiven array = \n\n");	 
	  for(i=0;i<size;i++)
	  {
		  printf("%d",*(ptr+i));
	  }
	  
   	  int mid=size/2;
   	  int count=1;
	 for(i=0;i<size;i++)
	 { 
	   for(j=i+1;j<size;j++)
	   {
	     	if(*(ptr+i)==*(ptr+j))
	    	{
	  	    	count++;
		     }
	    }
	  
	}
	printf("\nCount=%d\n ",count);
    if(count>mid)
	{
		printf("\nMajority");
	 }	 
	else
	{
		printf("\nNot majority ");
	 }	 
 	      	  
}