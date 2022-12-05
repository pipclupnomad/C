#include <stdio.h>
int main() 
{
    int n,i,S=0;
    printf("nhap SL n can tinh tong: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        S = S + i;
    }
    printf("S(%d) = 1+2+3+...+%d = %d",n,n,S);
}

