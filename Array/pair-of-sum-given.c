//pair of sum of given element 
#include<stdio.h>
#include<conio.h>
void main()
{
	int size ,i,j,sum,*ptr;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	 
	  int a[size];
	  ptr=&a;
	  
	  printf("\nEnter a element in array =");
	   for(i=0;i<size;i++)
	   {
	   	scanf("%d",(ptr+i));
	   }
	   
	   printf("\nGiven array = \n\n");
	    for(i=0;i<size;i++)
	    {
	    	printf("%d\t",*(ptr+i));
		}
     
     printf("\nEnter a sum of index = ");
     scanf("%d",&sum);
     
      for(i=0;i<size;i++)
      {
      	 for(j=i+1;j<size;j++)
      	 {
      	 	if(*(ptr+i)+*(ptr+j)==sum)
      	 	{
      	 	  printf("\nindex=%d\tindex=%d\n",i,j);	  
      	 	  printf("\nvalue of Index =%d\t value of index=%d\n",*(ptr+i),*(ptr+j));
		  }
		   }
	  }
    
}

