#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
int main() 
{
    system("clear");
    int option;
	do
	{
		printf("1. Question 1\n");
		printf("2. Question 2\n");
		printf("3. Quit program\n");

		printf("input option [1-3]: ");
		scanf("%d",&option);

		switch (option)
    		{
    			case 1:
    				Q1();
    				break;
    			case 2:
    				Q2();
    				break;
    			case 3:
    				printf("thank you !");
    				exit(0);
    			default:
    				printf("WRONG OPTION!!\n");
    				break;
    		}
	    }while(1);
}
void Q1()
{
    printf(" [THIS IS OPTION 1]\n");
}
void Q2()
{
    printf(" [THIS IS OPTION 2]\n");
}

