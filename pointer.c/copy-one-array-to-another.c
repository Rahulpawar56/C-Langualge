#include<stdio.h>
#include<conio.h>
void main()
{
	int size ,k,i,*ptr,*ptr1;
	printf("\nEnter a size =");
	scanf("%d",&size);
	
	int a[size];
	ptr=a;
	printf("\nEnter a element in array = ");
	
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  	
	  }
	  
	  printf("\nGiven array = \n\n");
	  
	    for(i=0;i<size;i++)
	    {
	    	
	    	printf("%d\t",*(ptr+i));
				
		}
			printf("\nAfter copy array = \n\n");
            
			int b[k];
               k=0;
               ptr1=b;
   
            for(i=0;i<size;i++)
             {
             	
              ptr1=*(ptr+i); 
	             k++;  
			  }
			  
		   for(i=0;i<size;i++)
            {
  	           printf("%d\t",*(ptr+i));
            }
     }  