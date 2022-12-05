#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void Q1();
void Q2();
//t?o h�m ??m s?
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
//t?o h�m kt s? armstrong
int armstrong(int m)
{
    int i, r, s=0;
    for(i=m; i>0; i/=10)
    {
        r = i%10;
        s += pow(r,demso(m));//d�ng kq h�m ??m s? b? v�o t�nh r^demso(m)
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
//khai b�o struct DOCTOR
struct DOCTOR
{
    char id[11], name[31], specialist[31];
    int exp_year;
};
typedef struct DOCTOR DOC; //t?i gi?n khai b�o struct DOCTOR th�nh ch? c�n DOC cho g?n

//khung c�u h?i 1 (nh? ph?i th�m 2 c�i Q1()v� Q2() ngo�i main)
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
// h?t khung c�u h?i 1

//c�u h?i Q1
void Q1()
{
    //Ph?n kt s? c� �m ko ko th� nh?p l?i
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
    //k?t th�c ph?n kt s? c� b? �m ko
    
    //ph?n s? armstrong
    armstrong(p);
}
void Q2()
{
    //ph?n ki?m tra SL nh?p c� �m ko ko th� nh?p l?i
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
    DOC ds[n]; //thay v� struct DOCTOR ds[n] th� c�n DOC ds[n]
    
    //ph?n nh?p t?ng th�ng tin 
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
    
    //ph?n in ra th�ng tin
    printf("\n ***list of doctor*** \n");
    for(int i=0; i<n; i++)
    {
        printf("Id: %s, name: %s, specialist: %s, exp-years: %d\n",ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_year);
    }
    
    //y�u c?u ?? b�i in ds nh?ng b�c s? >- 10 n?m kn
    printf("\n ***list of doctor >= 10y*** \n");
    for(int i=0; i<n; i++)
    {
        if(ds[i].exp_year>=10.0)
        {
            printf("Id: %s, name: %s, specialist: %s, exp-years: %d\n",ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_year);
        }
    }

}

