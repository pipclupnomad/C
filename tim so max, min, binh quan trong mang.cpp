#include <stdio.h>
int main() 
{
    int a[1000],i,j,temp,n,s=0;
    while(1==1)
    {
        printf("\nnhap SL phan tu trong mang: ");
        scanf("%d",&n);
        if(n>0)
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
        s+=a[i];
    }
    printf("\n *** DAY SO VUA NHAP DUOC SAP XEP NHU SAU *** \n");
    for(i=0; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%4d\t",a[i]);
    }
    printf("\nso lon nhat = %d",a[0]);
    printf("\nso be nhat = %d",a[n-1]);
    printf("\nso binh quan = %.1f",(float)s/n);
}
