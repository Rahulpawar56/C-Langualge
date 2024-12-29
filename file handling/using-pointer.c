//using pointer create a structure 
#include<stdio.h>
#include<conio.h>

void main()
{
    	struct Player
	{
		int run;
		char name[90];
		long int matches;
	};
	struct Player *p;
	int size;
	p=(struct p*)malloc(sizeof(char)*size);
	printf("\nENter a name run and matches of player\n");
	scanf("%s %d %ld",&p->name,&p->run,&p->matches);
	
	printf("\nName \t%s\n",p->name);
	printf("\nRun \t%d\n",p->run);
	printf("\nMatches \t%ld\n",p->matches);
}