//maximum difference in two array
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,*ptr;
	printf("\nEnter a size of array=");
	scanf("%d",&size);
	
	int a[size];
	ptr=&a;
	printf("\nEnter a element in array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  }
	  
	  int j;
	int diff=a[1]-a[0];
	
	  for(i=0;i<size;i++)
	  {
	     for(j=i+1;j<size;j++)
	     {
	     	 if(*(ptr+j)-*(ptr+i)>diff)
			  {
			  	diff=*(ptr+j)-*(ptr+i);
			   printf("index=%d\t index=%d\n",i,j);
			    
			  }
			
		 }
	}
	printf("\nMax difference =%d",diff);
}
