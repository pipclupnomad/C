#include <stdio.h>
int main() 
{
    int n,i;
    while(1==1)
    {
        printf("nhap SL so can nhap: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("vui long nhap lai !\n");
    }
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n *** DAY SO VUA NHAP *** \n");
    for(i=0; i<n; i++)
    {
        printf("%4d\t",a[i]);
    }
    //IN THEO CHIEU NGUOC LAI
    printf("\n *** DAY SO THEO CHIEU NGUOC LAI *** \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%4d\t",a[i]);
    }
}
