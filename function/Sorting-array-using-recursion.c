//Sorting array using recursion
#include<stdio.h>
#include<conio.h>
int i=0,j;
void main()
{
	void Sort(int [], int , int, int );
	int a[5],i;
	printf("\nENter a element in array =");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	Sort(a, 0,0,1);
}
   void display(int a[], int i)
   {
   	  if(i<5)
   	  {
   	  	 printf("%d ", a[i]);
   	     	i++;
   	  	  display(a,i);
		 }
   }
 void Sort (int x[], int i , int j, int f)
{
       if(i<5&&f)
       {
       	 f=0;
       	 
       	 j=i+1;
       	  Sort(x,i,j,f);
	   } else if(j<5)
	   {
	   		if(x[i]>x[j])
		 	{
		 		int temp=x[i];
		 		x[i]=x[j];
		 		x[j]=temp;
		    }
	   	j++;
	   	 Sort(x,i,j,f);
	   }else{
	   	  f=1;
	   	   if(i!=5)
	   	   {
	         i++;   	   	
	   	   	 Sort(x,i,j,f);
			  }else{
			  	 display(x,0);
			  }
	   }
	   
}

