#include <stdio.h>

int main() 
{
    int a,b,i,min,max,s=0;
    while(1==1)
    {
        printf("nhap so a: ");
        scanf("%d",&a);
        printf("nhap so b: ");
        scanf("%d",&b);
        if(a>0 && b>0)
        {
            break;
        }
            printf("vui long nhap lai!\n");
    }
    min = (a<b) ? a : b;
    max = (a>b) ? a : b;
    for(i=min; i<=max; i++)
    {
        if(i%2==1)
        {
            printf("%4d\t",i);
            s+=i;
        }
    }
    printf("\ntong cac so le giua [%d] va [%d] la [%d]",min,max,s);
}
