//credit card valid or not 
#include<stdio.h>
#include<conio.h>
void main()
{
 int is_valid(int no[]);     //declaration
  int no[16],i;
  printf("\nENter a element in array ");
  for(i=0;i<16;i++)
   {
   	scanf("%d",&no[i]);
   }
    int result= is_valid(no);      // calling 
      if(result)
      {
      	printf("\n Valid Credit card");
	  }
	  else
	  {
	  	printf(" \n Not valid");
	  }
}

    int is_valid(int a[])    //definition
     { 
     int i,b[8],c[8],k=1,j=1,flag=0;

      for(i=0;i<16;i++)
       {
 
  	     if(i%2!=0)
  	     {
  	        b[k] =a[i]*2;
  	      printf("%d\t",b[k]);
  	        k++;
         }
       }
      printf("\n");
        for(i=0;i<16;i++)
        {
           if(i%2==0)
           {
         	c[j]=a[i];
         	printf("%d\t",c[j]);
         	 j++;
		 }
	   }
	   
	  int rem,sum=0;
	  for(k=1;k<=8;k++)
	  {     
	  	  while(b[k]!=0)
	  	   { rem=b[k]%10;
	  	     b[k]=b[k]/10;
	  	     sum=sum+rem;
	  	 	}
	   } 
	    printf("\n\n%d",sum); 
    
    int sum2=0;
    for(j=1;j<=8;j++)
    {
        sum2=sum2+c[j];	
	}
	printf("\n\nSum2 %d",sum2);
	
	 int sum3;
	 sum3=sum+sum2;
	 printf("\n\n sum3 %d",sum3);
	 
	  if(sum3%10==0)
	  {
	      flag=1;
	  }
	  return flag;
}