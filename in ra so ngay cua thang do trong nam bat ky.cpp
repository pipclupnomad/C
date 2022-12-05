#include <stdio.h>
#include <stdlib.h>
int leap(int n)
{
    if(n%4 == 0 || n%100 == 0 || n%400 == 0)
    {
        printf(" co 29 ngay"); // nam nhuan
    }
    else
    {
        printf(" co 28 ngay"); // nam thuong
    }
}
int main() 
{
    system("cls");
    int thang, nam;
    char yesno ='y';
    label1:
    while(1==1)
    {
        printf("nhap thang: ");
        scanf("%d",&thang);
        printf("\nnhap nam: ");
        scanf("%d",&nam);
        if(thang > 0 && nam > 0)
        {
            break;
        }
            printf("\nnhap lai ...\n");
    }
    switch(thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
        printf("\nthang [%d] nam [%d] co 31 ngay !\n",thang,nam);
        break;
        
        case 4:
        case 6:
        case 9:
        case 11:
        printf("\nthang [%d] nam [%d] co 30 ngay !\n",thang,nam);
        break;
        
        case 2:
        printf("\nthang [%d] nam [%d]",thang,nam);
        leap(nam);
        break;
        
        default:
        printf("\nINVALID !!!");
        break;
        
    }
    while(1==1)
    {
        printf("\nContinue (y/n): ");
        scanf("%s",&yesno);
        if(yesno !='y' && yesno != 'Y')
        {
            printf("\nthank you !");
            break;
        }
        else
        {
            goto label1;
        }
    }
}
