#include<stdio.h>
#include<conio.h>
void main()
{
	struct Employee
	{
		int id;
		char name[90];
		int sal;
	};
	struct Employee e;
	printf("Enter a id name and salary of employee");
	scanf("%d %s %d",&e.id,&e.name,&e.sal);
	printf("Record of employee \n %d\t%s\t%d",e.id,e.name,e.sal);
	
}