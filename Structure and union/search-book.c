//strucure
#include<stdio.h>
#include<conio.h>
void main()
{
	struct Book
	{
		int id;
		char name[90];
		int price;
	};
	int id,name,price,i,sid,flag=0;
	struct Book b[5];
	for(i=0;i<5;i++)
	{
	printf("\nENter a book id\n");
	scanf("%d%s%d",&b[i].id,&b[i].name,&b[i].price);

	}
	printf("\nEnter a search id of the book");
	scanf("%d",&sid);
	
	for(i=0;i<5;i++)
	{
	printf("\nBOOK Name=%s\tBook Id=%d\t Book Price=%d",b[i].name,b[i].id,b[i].price);
	}

    for(i=0;i<5;i++)
    {
    	if(b[i].id==sid)
    	{
    		flag=1;
    		break;
		}
	
	}
	if(flag)
	{
		printf("\nFound Book");
	}
	else
	{
		printf("\nNot Found");
	}
	
}