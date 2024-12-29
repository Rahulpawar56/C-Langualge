//compare string without inbuid function
#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[90],b[90];
	int i,count1=0,count2=0,flag=0;
	printf("\nEnter a first string\n");
	gets(a);
	printf("\nEnter a second string\n");
	gets(b);
	
	while(a[count1]!='\0')
	{
		count1++;
	}
	while(b[count2]!='\0')
	{
		count2++;
	}
	
	if(count1!=count2)
	{
		printf("\nString are not equal");
	}
     else
     {
     	for(i=0;i<count1;i++)
     	{
     			if(a[i]!=b[i])
     			{
     			 flag=1;
				 }	 
		 }
	 }
	 if(flag)
	 {
	 	printf("\nString are not equal");
	 }
	 else
	 {
	 	printf("\nString are equal");
	 }
}
