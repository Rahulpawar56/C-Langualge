#include<stdio.h>
#include<conio.h>
void main()
{
	void to_morse(int );   //declaration
	int no;
	printf("\nENter a number = ");
	scanf("%d",&no);
	to_morse(no);        //calling

}
void to_morse(int x)    //definition
{
	int rem,rev=0,rem2;
     while(x>=0)
     {
     	rem=x%10;
     	x=x/10;
     	rev=rev*10+rem;
	 }
	printf("\nReverse is %d",rev);
	 
	while(rev!=0)
	 {
	 	rem2=rev%10;
	 	rev=rev/10;	

		 switch(rem2)
	 {
	 	case 0:
	 	{
	 		printf("-----\t");
			break;	
	    }
	    
	    case 1:
	    	{
	    		printf(".----\t");
	    		break;
			}
			case 2:
		    	{
			   		printf("..---\t");
			   		break;
		    	}
			case 3:
		    	{
			      	printf("...--\t");
			        break;		
			     }
			case 4:
			{
		 		printf("....-\t");
				break;
			}
		    
		    case 5:
		    	{
		    		printf(".....\t");
		    		break;
				}
			case 6:
				{
					printf("-....\t");
					break;
				}
				case 7:
					{
						printf("--...\t");
						break;
					}
				case 8:
				     {
				     	printf("---..\t");
						 break;
					 }					 
				case 9:
					{
						printf("----.\t");
						break;
					}	
					
					
        	 }
    

        }
}