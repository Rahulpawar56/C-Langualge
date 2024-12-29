//file handling vowel,consonent,palindrome
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr1,*ptr2,*ptr3,*ptr4,rev;
	char ch;
	int count=0;
	
	ptr1=fopen("C://Users//shree//Desktop//file handling//rahul.txt","r");
	ptr2=fopen("C://Users//shree//Desktop//file handling//vowel.txt","w");
	ptr3=fopen("C://Users//shree//Desktop//file handling//consonent.txt","w");
	ptr4=fopen("C://Users//shree//Desktop//file handling//palindrome.txt","w");
	
	if(ptr1==NULL)
	{
		printf("\nFile not available");
	}
	else
	{
		while((ch=fgetc(ptr1))!=EOF)
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
			fputc(ch,ptr2);
		    }
		  else if(ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u'||ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U')
		    {
		    	fputc(ch,ptr3);
			}
		}
		    
	    ch=strrev(ptr1);
	    if(ptr1==ch)
	    {
	    	fputc(ch,ptr4);
		}
	}
	fclose(ptr1);
	fclose(ptr2);
	fclose(ptr3);
	fclose(ptr4);
}