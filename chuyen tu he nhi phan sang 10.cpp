#include <stdio.h>
#include <math.h>
int demso(int k)
{
    int count=0;
    while(k>0)
    {
        k/=10;
        ++count;
    }
    return count;
}
int main() 
{
    int n,i,a[1000],s=0,cnt1=0;
    while(1==1)
    {
        printf("\nnhap day so nhi phan bat ky: ");
        scanf("%d",&n);
        if(demso(n)<=7 && n>0)
        {
            break;
        }
            printf("\n nhap lai ... ");
    }
    int x = n;
    for(i=0; n>0; ++i)
    {
        a[i] = n%10;
        n/=10;
        s+=a[i]*pow(2,i);
        cnt1++;
    }
    printf("\nso thap phan tuong ung voi [%d] la [%d] ",x,s);
}
