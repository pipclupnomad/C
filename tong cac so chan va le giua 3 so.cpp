#include <stdio.h>

int main() 
{
    int a,b,c,i,min,max,s=0;
    while(1==1)
    {
        printf("nhap so a: ");
        scanf("%d",&a);
        printf("nhap so b: ");
        scanf("%d",&b);
        printf("nhap so c: ");
        scanf("%d",&c);
        if(a>0 && b>0 && c>0)
        {
            break;
        }
            printf("vui long nhap lai!\n");
    }
    min = (a<b) ? a : b;
    min = (min<c) ? min : c;
    max = (a>b) ? a : b;
    max = (max>c) ? max : c;
    //tong cac so le
    for(i=min; i<=max; i++)
    {
        if(i%2==1)
        {
            printf("%4d\t",i);
            s+=i;
        }
    }
    printf("\ntong cac so le giua [%d] va [%d] la [%d]\n",min,max,s);
    //tong cac so chan
    for(i=min; i<=max; i++)
    {
        if(i%2==0)
        {
            printf("%4d\t",i);
            s+=i;
        }
    }
    printf("\ntong cac so chan giua [%d] va [%d] la [%d]",min,max,s);
}
