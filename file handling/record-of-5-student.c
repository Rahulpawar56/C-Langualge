// Enter Record of 5 student in text file 
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char name[10],rno[10];
	int i;
	
	ptr=fopen("C://Users//shree//Desktop//pawar.txt","w");
	
	if(ptr==NULL)
	{
		printf("\nFile not available");
	}
	else
	{
		for(i=1;i<=5;i++)
		{
			printf("\nENter name and roll no");
			gets(name);
			gets(rno);
		
		
		fputs(name,ptr);
		fputs("\t",ptr);
		fputs(rno,ptr);
		fputs("\n",ptr);
	}
		
	}
	fclose(ptr);
}