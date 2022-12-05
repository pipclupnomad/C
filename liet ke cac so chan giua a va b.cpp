// Tính t?ng các s? ch?n trong [a, b]
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    system("clear");
    int a,b,S=0,i;
    printf("nhap so nguyen a: ");
    scanf("%d",&a);
    printf("nhap so nguyen b: ");
    scanf("%d",&b);
    //kiem tra so nguyen nao bat dau
    (a>b) ? a : b;
    //tim nhung so chan giua a va b
    printf("\ncac so chan giua [%d] va [%d] la: \n",a,b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%4d\t",i);
            S = S + i;
        }
    }
    printf("\ntong cac so chan giua [%d] va [%d] la: [%d]",a,b,S);
}
 

