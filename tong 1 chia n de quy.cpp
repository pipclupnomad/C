// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
float sumcon(int n)
{
    int i=1;
    float S=0;
    while(i<=n)
    {
        S = S + (float)1/i;
        i++;
    }
    return S;
}

int main() 
{
    system("cls");
    int a;
    do
    {
        printf("\nnhap n = ");
        scanf("%d",&a);
        if(a>1)
        {
            break;
        }
        printf("\nnhap lai !");
    }
    while(1==1);
    printf("Tong = %.3f",sumcon(a));
}

