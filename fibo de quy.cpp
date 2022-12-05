// fibonacci sequence bang de quy
#include <stdio.h>
#include <stdlib.h>
int fibo(int k)
{
    if(k==1 || k==2)
    {
        return 1;
    }
        return fibo(k-1) + fibo(k-2);
}

int main() {
    system("cls");
    int i=1,a;
    do
    {
        printf("\nnhap SL so fibonacci: ");
        scanf("%d",&a);
        if(a>=3)
        {
            break;
        }
            printf("\nnhap lai !");
    }
    while(1==1);
    while(i<=a)
    {
        printf("%12d\t",fibo(i));
        i++;
    }
}

