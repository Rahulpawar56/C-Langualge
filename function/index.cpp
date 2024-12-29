#include<stdio.h>
#include<math.h>

 armstrong(int i, int no, int f, int k, int count, int temp , int rem, int sum)
 {
 	  if(i<=no&&f)
 	  {
 	  	
 	  	 k=i;
		   f=0;	
		   sum=0;
		   count=0;
		temp = i;
		  armstrong(i,no, f, k, count,temp,rem,sum);
	   }else if(k!=0)
	   {
	   	    k/=10;
	   	    count++;
	    armstrong(i,no, f, k, count,temp,rem,sum);
	   }else if(temp!=0){
	   	rem = temp%10;
	   	temp/=10;
	   	sum+=pow(rem, count);
	   		    armstrong(i,no, f, k, count,temp,rem,sum);
	   }else{
	   	f=1;
	   
	   	      if(sum==i)
	   	      {
				 printf("%d ",i);
			 }
			 i++;
		       if(i<=no)
		          armstrong(i,no, f, k, count,temp,rem,sum);

			   
	   }
 	
 	
 }

int main()
{
	
	 armstrong(1,1000,1,0,0,0,0,0);
	
}