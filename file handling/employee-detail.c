//Stucture using array 
#include<stdio.h>
#include<conio.h>
int size;
void main()
{
	struct Employee
	{
		int id;
		char name[90];
		int sal;
	};
	struct Employee e[size];
	printf("\nEnter a size of added employee");
	scanf("%d",&size);
   	for(int i=0;i<size;i++)
	{
	  printf("\nEnter a id name and salary of employee\n");	
		scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
		
	}
	
	printf("\nAfter insert Detail\n");
	for(int i=0;i<size;i++)
	{
			printf("%d\t%s\t%d\n",e[i].id,e[i].name,e[i].sal);
	}
	
}