#include <stdio.h>
int main() 
{
    int a[1000],i,j,n,cnt=0,k,cnt1=0;
    while(1==1)
    {
        printf("\nnhap SL phan tu trong mang: ");
        scanf("%d",&n);
        printf("ban nhap so may: ");
        scanf("%d",&k);
        if(n>0 && k>0)
        {
            break;
        }
            printf("\nnhap lai !");
    }
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n *** DAY SO VUA NHAP *** \n");
    for(i=0; i<n; i++)
    {
        printf("%4d\t",a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(k==a[i])
        {
            cnt++;
        }
    }
    if(cnt!=0)
    {
        printf("\n ==> so [%d] co trong day !\n",k);
    }
    else
    {
        printf("\n ==> so [%d] khong co trong day !\n",k);
    }
    printf("\ncac uoc so cua [%d] la: \n",k);
    for(i=1; i<=k; i++)
    {
        if(k%i == 0)
        {
            printf("%4d\t",i);
            cnt1++;
        }
    }
    printf("\n ==> co [%d] uoc so cua [%d]: \n",cnt1,k);
}
