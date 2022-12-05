// Online C compiler to run C program online
// kiem tra nam nhuan bang tam doan luan bang ham leap(a,b)
#include <stdio.h>
#include <stdlib.h>
    int leap(int n)
    {
        if(n%4 == 0 || n%100 == 0 || n%400 == 0)
        {
            printf("%4d la nam nhuan",n);
        }
        else
        {
            printf("%4d la nam thuong",n);
        }
    }
    int main()
    {
        system("cls");
        int a;
        do
        {
            printf("nhap nam = ");
            scanf("%d",&a);
            if(a>0)
            {
                
                break;
            }
                printf("nhap lai !\n");
        }
        while(1==1);
        leap(a);
    }


