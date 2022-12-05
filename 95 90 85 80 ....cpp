// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    system("cls");
    int n,i;
    // S = 1;
    do
    {
        printf("\nnhap n = ");
        scanf("%d",&n);
        if(n>1)
        {
            break;   
        }
        printf("nhap lai !");
    }
    while(1==1);
    for(i=n; i<=n, i>0; i=i-5)
    {
        printf("%4d\t",i);
    }
}

