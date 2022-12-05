#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
int giaithua(int t)
{
    if(t==1)
    {
        return 1;
    }
        return t*giaithua(t-1);
}
struct EMPLOYEES
{
    int bsal, wday;
    char name[31], id[11];
};
typedef struct EMPLOYEES EMP;
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
    int k, i;
    while(1==1)
    {
        printf("\nnhap so bat ky: ");
        scanf("%d",&k);
        if(k>=1 && k<=10)
        {
            break;
        }
            printf("vui long nhap lai !");
    }
    printf("giai thua cua [%d] la: ",k);
    printf("%4d\t\n",giaithua(k));
}
void Q2()
{
    int i,n;
    while(1==1)
    {
        printf("Enter the number of employees: ");
        scanf("%d",&n);
        if(n>=1 && n<=100)
        {
            break;
        }
            printf("vui long nhap lai !");
    }
    EMP ds[n];
    for(i=0; i<n; i++)
    {
        printf("Input employee no of %d: ",i+1);
        getchar();
        printf("\n    Employee No. : ");
        gets(ds[i].id);
        printf("\n    Employee Name: ");
        gets(ds[i].name);
        printf("\n    Base Salary: ");
        scanf("%d",&ds[i].bsal);
        printf("\n    Worked days: ");
        scanf("%d",&ds[i].wday);
    }
    
    printf("No      Name        Base salary     Wrk days    Net Salary\n");
    for(i=0; i<n; i++)
    {
        printf("%7s     %7s         %7d         %7d     %7d\n",ds[i].id, ds[i].name, ds[i].bsal, ds[i].wday, ds[i].bsal * ds[i].wday);
    }
    //tim ten
    char ten[31], yesno='y';
    int cnt;
    while(1==1)
    {
        cnt=0;
        getchar();
        printf("nhap ten nhan vien muon tim: ");
        gets(ten);
        for(i=0; i<n; i++)
        {
            if(strcmp(ds[i].name,ten)==0)
            {
                printf("\t%7s     %7s         %7d         %7d     %7d\n",ds[i].id, ds[i].name, ds[i].bsal, ds[i].wday, ds[i].bsal * ds[i].wday);
                cnt++;
            }
        }
        if(cnt==0)
        {
            printf("\nKHONG TIM THAY !!",ten);
        }
        
        printf("\ntiep tuc tim hay stop (y/n): ");
        yesno = getchar();
        if(yesno!='y' && yesno != 'Y')
        {
            break;
        }
    }
}

