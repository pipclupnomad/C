#include <stdio.h>
int ucln(int a, int b)
{
    if(b==0) 
    {
        return a;
    }
        return ucln(b, a%b);
}
int main()
{
    int a, b;
    printf("nhap so a: ");
    scanf("%d",&a);
    printf("nhap so b: ");
    scanf("%d",&b);
    (a>b) ? a : b;
    printf("%d", ucln(a, b));
}
 

