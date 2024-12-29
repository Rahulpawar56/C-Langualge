#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int size,i,choice,ch;
		
	printf("\nEnter a size of array");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter a element in array");
	
	 for(i=0;i<size;i++)
	 {
	 	
	 	scanf("%d",&a[i]);
	 }
	 printf("\nGiven array");
	 
	  for(i=0;i<size;i++)
	  {
	  	printf("\t%d",a[i]);
      }
      do
      {
	    
	 printf("\ncase 1:Acsending order");
	 printf("\ncase 2:Discending order");
	 printf("\ncase 3:sum of digit ");
	 printf("\ncase 4:Even number at first and odd number at last");
	 printf("\ncase 5: store only prime number at index");
	 printf("\nEnter a choice");
	 scanf("%d",&choice);
	  
	  switch(choice)
	  {
	  	case 1:
	  	    {
	  	    int rem,j,sum=0,count;
	  	    int b[j];
	        
	        for(i=0;i<size;i++)
	        {
			
	        	count=1;
	        	while(a[i]!=0)
	        	{
	        		a[i]=a[i]/10;
	        		count++;
				}
				
				for(i=0;i<count;i++)
				{
					rem=a[i]%10;
					a[i]=a[i]/10;
					b[j]=rem;
				}
		    }
			
				  
				  
	
			
	              			   
	  	       	break;
			 }
			 
	    case 2:
		{
			
			
			break;
		 }		
		 
	    case 3:
		 {
		 	
			 
			 break;
		 	
		  } 
		  
		case 4:
		  	{
		  		
		  		
		  		break;
		    }
		    
		case 5:
		{
			
			
			
			break;
			
		 } 
		 
		 
	   }
	   }while(ch=='y'|| ch=='Y');
	   
	   }