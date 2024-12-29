//#include<stdio.h>
#include<conio.h>
 main()
{
	int size,n,A,i,min;
	printf("\nENter a size\n ");
	scanf("%d",&size);
	
	int a[size];
	printf("\nENter a element in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
    
     printf("\nENter a K th largest number\n");
     scanf("%d",&n);
    
    for(i=0;i<size;i++)
    {
    	for(int j=i+1;j<size;j++)
    	{
    		if(a[i]>a[j])
    		{
    			int temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
     
    min=a[0];
    A=n;
    for(i=0;i<A;i++)
    {
      min=a[i];
	}
    
	printf("\nK th Largest number =%d",min);
}