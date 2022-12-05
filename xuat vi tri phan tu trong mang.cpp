#include <stdio.h>
int main() 
{
    int n,i;
    while(1==1)
    {
        printf("\nnhap SL phan tu: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("\nvui long nhap lai !");
    }
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%4d\t",a[i]);
    }
    int x;
    printf("\nNhap gia tri x can tim:\n");
    scanf("%d", &x);
    printf("\nVi tri cua x trong mang la:\n");
    for(int i = 0; i<n; i++)
    {
        if(a[i]==x)
        {
            printf("%d \t",i);
        }
    }
}
