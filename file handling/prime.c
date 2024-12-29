//prime or not 
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	int i,size,count=0,j;

		printf("\nENter a size of array\n");
    	scanf("%d",&size);
    	int a[size];	
    	printf("\nENter a element in array\n");
	
	 for(i=0;i<size;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	
	ptr=fopen("C://Users//shree//Desktop//file handling//prime.txt","w");
	
	while(i!=0)
	{
		count=0;
		j=1;
		
		while(j<=i)
		{
			if(i%j==0)
			{
			
			count++;
			j++;
		   }
			
		}
		
		if(count==2);
          {
	     	fputc(i,ptr);
      	 } 
		
		i++;
		
	}
	
	fclose(ptr);
}