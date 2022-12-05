#include <stdio.h>
int main() 
{
    int a,b,c,max;
    printf("nhap so a: ");
    scanf("%d",&a);
    printf("nhap so b: ");
    scanf("%d",&b);
    printf("nhap so c: ");
    scanf("%d",&c);
    max = (a>b) ? a : b;
    max = (max>c) ? max : c;
    printf("so lon nhat la: %d", max);
}
