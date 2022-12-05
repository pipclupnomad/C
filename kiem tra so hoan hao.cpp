// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    system("cls");
    int n,S=0;
    while(1==1)
    {
        printf("\nnhap so nguyen duong n: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("\nxin vui long nhap lai !");
    }
    printf("cac uoc so cua [%d] la: \n",n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%4d\t",i);
            S = S + i;
        }
    }
    if(S==n)
    {
        printf("\nso [%d] la so hoan hao",n);
        printf("\nYES");
    }
    else
    {
        printf("\nso [%d] la so khong hoan hao",n);
        printf("\nNO");
    }
}
 

