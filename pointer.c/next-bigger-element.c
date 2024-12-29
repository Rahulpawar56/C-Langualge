//Next bigger element 
#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j;
	printf("\nEnter a size of array = ");
	scanf("%d",&size);
	
	 int a[size],b[size],c[size];
	 printf("\nEnter  element in array = ");
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	  for(i=0;i<size+1;i++)
	  {
	  	 for(j=i+1;j<size+2;j++)
	  	 {
	  	 	
	  	 	if(a[i]<a[j])
	  	 	{
	  	 		printf("\nThe next bigger element %d in array is %d\t",a[i],a[j]);
	  	 		b[i]=a[j];
	  	 		c[i]=a[i];
				   break;			   }
		   }
	  }


 for(i=0;i<size+2;i++)
 {
 	for(j=i+1;j<size+2;j++)
 	{
 		if(a[i]!=c[i])
 		{
 			b[i]=-1;
 			printf("-1");
 			break;
		 }
	 }
 }
 
 printf("\n");
  for(i=0;i<size;i++)
  {
  	printf("%d\t",b[i]);
  }
  return 0;
}

