#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct PRODUCT
{
    char maso[31], name[31];
    int dgia, sl;
};
typedef struct PRODUCT PRO;
int main() 
{
    int n,i,j,s=0;
    while(1==1)
    {
        printf("nhap SL san pham: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("xin nhap lai ...\n");
    }
    PRO ds[n];
    for(i=0; i<n; i++)
    {
        getchar();
        printf("\nma so: ");
        gets(ds[i].maso);
        printf("\nTen san pham: ");
        gets(ds[i].name);
        printf("\nDon gia: ");
        scanf("%d",&ds[i].dgia);
        printf("\nSo luong: ");
        scanf("%d",&ds[i].sl);
    }
    printf("Bao Cao Ton Kho\n");
    printf("Maso\t Ten san pham\t Don gia\t So luong\t Tri gia\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t %14s\t %10d\t %8d\t %7d\n",ds[i].maso, ds[i].name, ds[i].dgia, ds[i].sl, ds[i].dgia*ds[i].sl);
        s+=(ds[i].dgia*ds[i].sl);
    }
    printf("Tong tri gia: %d",s);
    //tim tri gia lon nhat in ra dong do
    printf("\n *** SAN PHAM CO GIA TRI LON NHAT ***\n");
    for(i=0; i<n; i++)
    {
        if((ds[0].dgia*ds[0].sl) < (ds[i].dgia*ds[i].sl))
        {
            ds[0] = ds[i];
        }
    }
    printf("Maso\t Ten san pham\t Don gia\t So luong\t Tri gia\n");
    printf("%s\t %14s\t %10d\t %8d\t %7d\n",ds[0].maso, ds[0].name, ds[0].dgia, ds[0].sl, ds[0].dgia*ds[0].sl);
    // sap xep tri gia giam dan
    PRO temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((ds[i].dgia*ds[i].sl) < (ds[j].dgia*ds[j].sl))
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    printf("\n *** DANH SACH SAN PHAM SAU KHI XAP XEP *** \n");
    printf("Maso\t Ten san pham\t Don gia\t So luong\t Tri gia\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t %14s\t %10d\t %8d\t %7d\n",ds[i].maso, ds[i].name, ds[i].dgia, ds[i].sl, ds[i].dgia*ds[i].sl);
    }
}
