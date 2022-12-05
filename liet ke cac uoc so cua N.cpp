#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
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
    printf("\ncac uoc so cua [%d] la: \n",n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%4d\t",i);
        }
    }
}

