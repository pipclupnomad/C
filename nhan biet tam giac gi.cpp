#include<stdio.h>
int main()
{
    //khai bao a, b, c
    int a, b, c;
    do
    {
        printf("\nNhap canh a: ");
        scanf("%d", &a);    
        printf("\nNhap canh b: ");
        scanf("%d", &b);
        printf("\nNhap canh c: ");
        scanf("%d", &c);
    }while(a<=0 || b<=0 || c<=0);//neu a,b,c nho hon hoac bang 0 yeu cau nhap lai
    if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
    {
        printf("\nDay la tam giac vuong");
    }else if((a == b) && (b == c))
    {
        printf("\nDay la tam giac deu");
    }
    else if(a == b || a == c || b == c)
    {
        printf("\nDay la tam giac can");
    }else
    {
        printf("\nDay la tam giac thuong");
    }
}
