// Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
#include <stdio.h>
#include <stdio.h>
int main() {
    int n,S=0,i;
    //kiem tra so N co nguyen duong ko
    while(1==1)
    {
        printf("nhap so nguyen duong N: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("xin vui long nhap lai !");
    }
    //tinh tong S
    for(i=1;i<=n;i++)
    {
        S = S + i*i*i;
    }
    printf("S(n = %d) = 1^3 + 2^3 + ... + %d^3 = %d",n,n,S);
}
 

