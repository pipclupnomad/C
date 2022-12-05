#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
struct RECTANGLES
{
    int width, height;
    char color[31];
};
typedef struct RECTANGLES REC;
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
    int k,i,count=0;
    while(1==1)
    {
	    printf("Enter an integer number: ");
	    scanf("%d",&k);
	    if(k>0)
	    {
	    	break;
		}
			printf("nhap lai !\n");
	}
    for(i=1; i<=k; i++)
    {
        if(k%i==0 && i%2==1)
        {
            printf("%4d\t",i);
            count++;
        }
    }
    printf("\nNumber of odd divisors of %d: %d\n",k,count);
}
void Q2()
{
    int n,i,j;
    while(1==1)
    {
        printf("Enter the number of rectangles: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("xin vui long nhap lai !");
    }
    REC ds[n];
    printf("Please enter the data for: \n");
    for(i=0; i<n ;i++)
    {
        printf("Rectangle no. %d\n",i+1);
        printf("Width: ");
        scanf("%d",&ds[i].width);
        printf("Height: ");
        scanf("%d",&ds[i].height);
        getchar();
        printf("Color: ");
        gets(ds[i].color);
    }
    printf("Lists of Rectangles\n");
    printf("No      Width       Height      Area        Color\n");
    printf("=====================================================\n");
    for(i=0; i<n; i++)
    {
        printf("%d     %6d     %6d     %6d     %9s\n", i+1, ds[i].width, ds[i].height, ds[i].width * ds[i].height, ds[i].color);
    }
    //SX area theo thu tu giam dan
    printf("danh sach rectangles theo thu tu area giam dan: \n");
    REC temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ds[i].width * ds[i].height < ds[j].width * ds[j].height)
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("No      Width       Height      Area        Color\n");
    printf("=====================================================\n");
    for(i=0; i<n; i++)
    {
        printf("%d     %6d     %6d     %6d     %9s\n", i+1, ds[i].width, ds[i].height, ds[i].width * ds[i].height, ds[i].color);
    }
    //tim color
    char clr[11], yesno='y';
    int cnt;
    while(1==1)
    {
        cnt=0;
        //getchar();
        printf("nhap mau muon tim: ");
        gets(clr);
        printf("No      Width       Height      Area        Color\n");
        printf("=====================================================\n");
        for(i=0; i<n; i++)
        {
            if(strcmp(ds[i].color,clr)==0)
            {
                //da tim thay mau trung khop
                printf("%d     %6d     %6d     %6d     %9s\n", i+1, ds[i].width, ds[i].height, ds[i].width * ds[i].height, ds[i].color);
                cnt++;
            }
        }
        if(cnt==0)
        {
            printf("KHONG TIM THAY MAU PHU HOP !!! \n",clr);
        }
        printf("tim tiep hay khong (y/n): \n");
        yesno = getchar();
        if(yesno!='y' && yesno!='Y')
        {
            break;
        }
        getchar();
    }
}

