#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int t)
{
    if(t==1)
    {
        return 1;
    }
        return t*fact(t-1);
}
int tohop(int n, int k)
{
    if(n==1)
    {
        return 1;
    }
        return fact(n)/(fact(k)*fact(n-k));
}
int main() 
{
    system("cls");
	int a,b,max,min;
    while(1==1)
    {
        printf("\nnhap a: ");
        scanf("%d",&a);
        printf("\nnhap b: ");
        scanf("%d",&b);
        max = (a>b) ? a : b;
        min = (a<b) ? a : b;
        if(a<0 || b<0)
        {
            printf("vui long nhap lai !");
        }
            printf("to hop cua [%d] va [%d] la [%d]",max,min,tohop(max,min));
            continue;
    }

}

