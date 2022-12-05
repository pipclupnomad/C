#include <stdio.h>
int main() 
{
    int a[1000],i,n,cnt=0,k;
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
        printf("\nso [%d] co trong day !\n",k);
    }
    else
    {
        printf("\nso [%d] khong co trong day !\n",k);
    }
}
