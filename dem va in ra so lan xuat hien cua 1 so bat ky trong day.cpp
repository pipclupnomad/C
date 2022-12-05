#include <stdio.h>
int main() 
{
    int a[1000],i,j,n,cnt=0,k;
    while(1==1)
    {
        printf("\nnhap SL phan tu trong mang: ");
        scanf("%d",&n);
        printf("ban muon dem va in ra so may: ");
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
        if(a[i] == k)
        {
            cnt++;
        }
    }
    printf("\nSo [%d] xuat hien [%d] lan trong day !\n",k,cnt);
}
