// kiem tra 1 so co phai la so nguyen to
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    system("cls");
    int n,i=0;
    char ans='y';
    while(1==1)
    {
        printf("\nnhap so nguyen duong n: ");
        scanf("%d",&n);
        if(n>=2)
        {
            if(n%2!=0 || n==2)
            {
                printf("so [%d] la so nguyen to",n);
            }
            else
            {
                printf("so [%d] khong phai la so nguyen to",n);
            }
            printf("\nContinue (y/n): ");
            scanf("%s",&ans);
            getchar();
            if(ans == 'y' || ans == 'Y')
            {
                continue;
            }
            else
            {
                printf("\nthank you!");
                break;
            }
        }
            printf("\nxin vui long nhap lai !");
    }
}
 

