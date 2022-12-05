#include <stdio.h>
int sumsquare(int k)
{
    int i,s=0;
    for(i=1; i<=k; i++)
    {
        printf("%4d\t",i*i);
        s += i*i;
    }
    printf("\nsum square = %d",s);
}
int main() 
{
    int n;
    while(1==1)
    {
        printf("nhap SL so nguyen: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("nhap lai !\n");
    }
    sumsquare(n);
}
