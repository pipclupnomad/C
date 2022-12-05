#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
struct COUNTRIES{
    char name[31], capital[31];
    int area;
};
typedef struct COUNTRIES CON;
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
    int a,b,i,s=0;
    while(1==1)
    {
        printf("Enter an the first number N1 (<100): ");
        scanf("%d",&a);
        printf("Enter an the second number N2 (<10): ");
        scanf("%d",&b);
        if((a>0 && a<100) && (b>0 && b<10))
        {
            break;
        }
            printf("vui long nhap lai !");
    }
    printf("multiples of [%d] (<= [%d]) are: \n",b,a);
    for(i=b; i<=a; i++)
    {
        if(i%b==0)
        {
            printf("%4d\t",i);
            s += i;
        }
    }
    printf("\nsum of them are: %d\n",s);
}
void Q2()
{
    int n,i;
    while(1==1)
    {
        printf("Enter the number of countries: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("vui long nhap lai!");
    }
    CON ds[n];
    printf("Please enter the data for\n");
    for(i=0; i<n; i++)
    {
        printf("Country no %d\n",i+1);
        getchar();
        printf("name: ");
        gets(ds[i].name);
        printf("capital: ");
        gets(ds[i].capital);
        printf("area (square miles): ");
        scanf("%d",&ds[i].area);
    }
    printf("danh sach cac nuoc\n");
    for(i=0; i<n; i++)
    {
        printf("name: [%4s], capital: [%4s], area: [%4d]\n",ds[i].name, ds[i].capital,ds[i].area);
    }
    for(i=0; i<n; i++)
    {
        if(ds[0].area<ds[i].area)
        {
            ds[0] = ds[i];
        }
    }
    printf("the largest nation is [%s]\n",ds[0].name);
}

