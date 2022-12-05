#include <stdio.h>
int main() {
    int n,i,k=1;
    printf("nhap so n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) 
    {
        k *= i;
    }
    printf("so giai thua cua [%d] la: [%d]",n,k);
}

