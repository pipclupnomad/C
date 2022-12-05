#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
struct DATE
{
	int day, month, year;	
};
struct FILM
{
	char name[31];
	int price;
	struct DATE date;
};
typedef struct FILM FM;
int main() 
{
    system("cls");
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
    int k,i,cnt=0;
    float s=0;    
    while(1==1)
    {
    	printf("Enter the size of the array: ");
    	scanf("%d",&k);
    	if(k>0)
    	{
    		break;
		}
			printf("vui long nhap lai !\n");
	}
	
	int a[k];
	//1. nhap
	for(i=0; i<k; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	//2. xuat
	printf("\nOutput the array: ");
	for(i=0; i<k; i++)
	{
		printf("%4d\t",a[i]);
		if(a[i]%2!=0)
		{
			cnt++;
			s+=a[i];	
		}
		else if(a[i]==0)
		{
			continue;
		}
	}
	printf("\n Number of odd integers: %d",cnt);
	printf("\n Average of odd numbers: %.2f\n",(float)s/cnt);
}
void Q2()
{
    int n;
    char yesno = 'y';
    int gia, cnt1=0;
    while(1==1)
    {
        printf("\nEnter the numer of tickets: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("xin vui long nhap lai !");
    }
    FM ds[n];
    //1. nhap
    for(int i=0; i<n; i++)
    {
        getchar();
    	printf("Input for the ticket %d:",i+1);
    	printf("\nFilm: ");
    	gets(ds[i].name);
    	printf("Price: ");
    	scanf("%d",&ds[i].price);
    	printf("Day: ");
    	scanf("%d",&ds[i].date.day);
    	printf("Month: ");
    	scanf("%d",&ds[i].date.month);
    	printf("Year: ");
    	scanf("%d",&ds[i].date.year);
    	printf("\n\n");
	}
	//2. xuat
	printf("\nInformation of tickets:\n");
	for(int i=0; i<n; i++)
	{
		printf("\nFilm: %s",ds[i].name);
		printf("\nPrice: %d",ds[i].price);
		printf("\ndate: %3d -%3d -%5d\n\n",ds[i].date.day,ds[i].date.month,ds[i].date.year);
	}
}


