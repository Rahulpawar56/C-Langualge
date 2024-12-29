//decimal to binary using function
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]={1,2,3,4,5};
int bArray[4];
for(int i=0;i<5;i++)
{
	int no=arr[i];
	int k=0,j=0;
	while(k<4)
	{
		while(no!=0)
		{
		 int rem=no%2;
		 bArray[j++]=rem;
		 no=no/2;	
		}
		bArray[j++]=0;
		k++;
	}
	printf("\nBinary Array = ");
	for(int l=3;l>=0;l--)
	{
		printf("%d",bArray[l]);
	}
	
  }
}
