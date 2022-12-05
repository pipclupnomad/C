// sum of digits in a given number
#include <stdio.h>
#include <math.h>
int main() 
{
    int r,n,i,s=0,cnt=0,S=0;
    printf("nhap so bat ky: ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        s = s + r;
        n/=10;
        cnt++;
    }
    printf("\ntong cac chu so la: [%d]",s);
    printf("\nSL cac chu so la: [%d]",cnt);
}
