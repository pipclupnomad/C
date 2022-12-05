#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void Q1();
void Q2();
//t?o hàm ??m s?
int demso(int k)
{
    int count = 0;
    while(k>0)
    {
        k/=10;
        count++;
    }
    return count;
}
//t?o hàm kt s? armstrong
int armstrong(int m)
{
    int i, r, s=0;
    for(i=m; i>0; i/=10)
    {
        r = i%10;
        s += pow(r,demso(m));//dùng kq hàm ??m s? b? vào tính r^demso(m)
    }
    if(s == m)
    {
        printf("%d la so armstrong\n",m);
    }
    else
    {
        printf("%d ko la so armstrong\n",m);
    }
}
//khai báo struct DOCTOR
struct DOCTOR
{
    char id[11], name[31], specialist[31];
    int exp_year;
};
typedef struct DOCTOR DOC; //t?i gi?n khai báo struct DOCTOR thành ch? còn DOC cho g?n

//khung câu h?i 1 (nh? ph?i thêm 2 cái Q1()và Q2() ngoài main)
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
// h?t khung câu h?i 1

//câu h?i Q1
void Q1()
{
    //Ph?n kt s? có âm ko ko thì nh?p l?i
    int p;
    while(1==1)
    {
        printf("\nEnter N: ");
        scanf("%d",&p);
        if(p>0)
        {
            break;
        }
            printf("\nxin vui long nhap lai !");
    }
    //k?t thúc ph?n kt s? có b? âm ko
    
    //ph?n s? armstrong
    armstrong(p);
}
void Q2()
{
    //ph?n ki?m tra SL nh?p có âm ko ko thì nh?p l?i
    int n;
    while(1==1)
    {
        printf("\nEnter the numer of doctors: ");
        scanf("%d",&n);
        if(n>=3 && n<=10)
        {
            break;
        }
            printf("xin vui long nhap lai !");
    }
    DOC ds[n]; //thay vì struct DOCTOR ds[n] thì còn DOC ds[n]
    
    //ph?n nh?p t?ng thông tin 
    for(int i=0; i<n; i++)
    {
        getchar();
        printf("\nDoctor no %d\n",i+1);
        printf("id: ");
        gets(ds[i].id);
        printf("name: ");
        gets(ds[i].name);
        printf("specialist: ");
        gets(ds[i].specialist);
        printf("exp_year: ");
        scanf("%d",&ds[i].exp_year);
    }
    
    //ph?n in ra thông tin
    printf("\n ***list of doctor*** \n");
    for(int i=0; i<n; i++)
    {
        printf("Id: %s, name: %s, specialist: %s, exp-years: %d\n",ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_year);
    }
    
    //yêu c?u ?? bài in ds nh?ng bác s? >- 10 n?m kn
    printf("\n ***list of doctor >= 10y*** \n");
    for(int i=0; i<n; i++)
    {
        if(ds[i].exp_year>=10.0)
        {
            printf("Id: %s, name: %s, specialist: %s, exp-years: %d\n",ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_year);
        }
    }

}

