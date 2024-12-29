//Ascending order
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,*ptr;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	 int a[size];
	 ptr=&a;
	 printf("\nENter a element in array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  }
	  
	  printf("\nGiven element is = \n\n");
	     
	      for(i=0;i<size;i++)
	      {
	      	printf("%d\t",*(ptr+i));
		  }
		  
	printf("\nAfter ascending order = \n");	  
	 int temp;
	 
	  for(i=0;i<size;i++)
	  {
	  	for(j=i+1;j<size;j++)
	  	{
	  		 if(*(ptr+i)>*(ptr+j))
	  		{
	  			
	  		 temp=*(ptr+i);
			   *(ptr+i)=*(ptr+j);
			   *(ptr+j)=temp;	
		    }
	    }
      
	 	printf("%d\t",*(ptr+i));
	}
} 