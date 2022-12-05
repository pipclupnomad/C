// Tính S = x + x^2/2! + ... + x^n/n!
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int k)
{
    if(k==1)
    {
        return 1;
    }
        return k*fact(k-1);
}
int main() 
{
    double x,n,j;
    float S=0;
    printf("nhap so x: ");
    scanf("%lf",&x);
    printf("nhap SL so can tinh tong n: ");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++)
    {
        j = (double)pow(x,i);
        S = S + j/fact(i);
    }
    printf("S(%.0lf,%.0lf) =%.0lf + %.0lf^2/2! + ... + %.0lf^%.0lf/%.0lf!= %.2f",x,n,x,x,x,n,n,S);
}
 

