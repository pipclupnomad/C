#include <stdio.h>
int main() 
{
    int a[1000],i,j,n,cnt=0;
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
    }
    printf("\n *** DAY SO CHAN TRONG DAY *** \n");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            printf("%4d\t",a[i]);
            cnt++;
        }
    }
    printf("\nco [%d] so chan trong day !",cnt);
}
