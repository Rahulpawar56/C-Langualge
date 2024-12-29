//floor and ceil
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,floor,ceil,last,n,*ptr;
	printf("\nEnter a size of array =");
	scanf("%d",&size);
	
	 int a[size];
	 ptr=&a;
	 printf("\nEnter a element in array = ");
	  for(i=0;i<size;i++)
	  {
	  	scanf("%d",(ptr+i));
	  }
	  
	  printf("\nEnter a number = ");
	  scanf("%d",&n);
	  
	  last=size-1;
	  
	   for(i=0;i<size;i++)
	   {
	   	if(n<a[0])
	   	{
	   		floor=-1;
	   		ceil=a[0];
	   		break;
		  }
		  
		 if(n>a[last])
		 {
		 	floor=a[last];
		 	ceil=-1;
		 	break;
		  } 
		  
		 if(n==*(ptr+i))
		 {
		 	floor=*(ptr+i);
		 	ceil=*(ptr+i);
		 	break;
		 }
		 
		 if(*(ptr+i)<n && *(ptr+i+1)>n)
		 {
		 	floor=*(ptr+i);
		 	ceil=*(ptr+i+1);
		 	break;
		 }
		 
	   }
	 
	printf("\nFloor=%d\t ceil=%d",floor,ceil);   
	  
}