//structure 
#include<stdio.h>
#include<conio.h>
void main()
{
	struct player
	{
		char name[90];
		int run;
		int matches;
	};

	struct player p[5];
		int name,run,matches,no,i; 
	 for(i=0;i<5;i++)
	 {
	   printf("\nENter a name run and matches\n");
	   scanf("%s%d%d",&p[i].name,&p[i].run,&p[i].matches);
	   
	 }
	 
	  for(i=0;i<5;i++)
	  {
	  	printf("\nName =%s",p[i].name);
	  	printf("\tRun =%d",p[i].run);
	  	printf("\tMatches=%d",p[i].matches);
	  }
}