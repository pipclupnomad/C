//kiem tra 3 so a,b,c co tao thanh tam giac ko
#include <stdio.h>
int main() 
{
    float a,b,c;
    printf("nhap canh a: ");
    scanf("%f",&a);
    printf("nhap canh b: ");
    scanf("%f",&b);
    printf("nhap canh c: ");
    scanf("%f",&c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("\n day la mot tam giac !");
    }
    else
    {
        printf("\n day khong phai la mot tam giac !");
    }
}
