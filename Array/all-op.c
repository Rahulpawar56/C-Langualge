#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,j,ch;

	printf("\nEnter a size if array =");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array =");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int size2=size;
	int b[size2];
	
	do
	{
		int choice;
		printf("\ncase 1:ascending order =");
		printf("\ncase 2: descending order =");
		printf("\ncase 3: sum of digit =");
		printf("\ncase 4:even at first and odd number at last =");
		printf("\ncase 5: prime number =");
		printf("\nEnter a choice =");
		scanf("%d",&choice);
		
		 switch(choice)
		 {
	    	 case 1:
		 	  {//ascending order
				int rem,count,j,k,temp;
     			for(i=0;i<size;i++)
				 {
			    	count=0;
		 				
		 				while(a[i]!=0)
		 				{
		 					rem=a[i]%10;
		 					a[i]=a[i]/10;
		 					b[count]=rem;
		 					count++;
						 }
						 
						 for(j=0;j<count;j++)
						 {
						 	for(k=(j+1);k<count;k++)
						 	{
						 	 if(b[j]>b[k])
							  {
							  	temp=b[j];
							  	b[j]=b[k];
							  	b[k]=temp;
							  	
								}	
							 }
						 }
					
					for(i=0;i<count;i++)
					{
						printf("%d",b[i]);
					}
					printf("\t");
			    }
		  break;  
		 }
				 
		 }
		
	}while(ch=='y');
}