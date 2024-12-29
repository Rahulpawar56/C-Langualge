//second largest number in array using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,max,i,*ptr;
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
	  	printf("%d\t",*(ptr+i));
	  }
	   
	   int temp;
	   int j;
	   for(i=0;i<size;i++)
	   {
	   	 for(j=i+1;j<size;j++)
	   	 {
	   	 	if(*(ptr+j)<*(ptr+i))
	   	 	{
	   	 		temp=*(ptr+i);
	   	 		*(ptr+i)=*(ptr+j);
	   	 		*(ptr+j)=temp;
				}
			}
	   }
	  
	 max=0;
	  for(i=0;i<size;i++)
	  {
	  	if(max<*(ptr+i))
	  	{
	  	 max=*(ptr+i);
	     }
	  }
	  
	  printf("\nAfter sorting array = \n\n");
	   for(i=0;i<size;i++)
	   {
	   	printf("%d\t",*(ptr+i));
	   }
	  printf("\n\n\nMax element is = %d",max);
	  
	  int max1;
	  max1=a[0];
	   for(i=0;i<max;i++)
	   {
	   	  if(a[i]<max)
	   	  {
	   	  	  if(max1<*(ptr+i))
	   	  	  {
	   	  	  	max1=*(ptr+i);
			   }
		  }
      }
    
    printf("\n\n\nSecond largest number = %d",max1);
}