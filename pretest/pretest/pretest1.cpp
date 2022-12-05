#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Q1();
void Q2();
struct STUDENT
{
    char name[31];
    float science, math, english;
    int id;
};
typedef struct STUDENT STU;
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
    int a[100],n,i=0,cnt=0;
    char ans='y';
    while(i>=0)
    {
        printf("Please enter a positive number %d: ",i+1);
        scanf("%d",&a[i]);
        getchar();
        if(a[i]>0)
        {
            printf("Continue (y/n): ");
            ans = getchar();
            if(ans=='y' || ans=='Y')
            {
               cnt++;
               i++;
            }
            else
            {
                break;
            }
        }
        else
        printf("vui long nhap lai !\n");
    }
    printf("the entered number are: \n");
    for(i=0; i<=cnt; i++)
    {
        printf("%4d\t",a[i]);
    }
    for(i=0; i<=cnt; i++)
    {
       if(a[0]<a[i])
       {
           a[0] = a[i];
       }
    }
    printf("\nthe greatest number is: %4d\t\n",a[0]);

}
void Q2()
{
    int n,i;
    while(1==1)
    {
        printf("How many students do you want to manage: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("vui long nhap lai !");
    }
    STU ds[n];
    printf("Please enter students data: \n");
    for(i=0; i<n; i++)
    {
        printf("\nStudent no %d\n",i+1);
        getchar();
        printf("name: ");
        gets(ds[i].name);
        printf("Enrollment no: ");
        scanf("%d",&ds[i].id);
        printf("science mark: ");
        scanf("%f",&ds[i].science);
        getchar();
        printf("math mark: ");
        scanf("%f",&ds[i].math);
        printf("english mark: ");
        scanf("%f",&ds[i].english);
    }
    printf("\n\n *** danh sach diem thi *** \n\n");
    for(i=0; i<n; i++)
    {
        printf("Student no:\t%d\n",i+1);
        printf("name: %s\n",ds[i].name);
        printf("Enrollment no: %d\n",ds[i].id);
        printf("science mark: %.1f\n",ds[i].science);
        printf("math mark: %.1f\n",ds[i].math);
        printf("english mark: %.1f\n",ds[i].english);
        printf("Total mark: %.1f\n",ds[i].science+ds[i].math+ds[i].english);
        printf("Average mark: %.1f\n\n\n",(ds[i].science+ds[i].math+ds[i].english)/3);
    }
}

