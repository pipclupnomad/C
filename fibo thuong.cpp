#include <stdio.h>
#include <stdlib.h>
int main() {
    system("cls");
    int i,n;
    printf("nhap n = ");
    scanf("%d",&n);
    int f0 = 0;
    int f1 = 1;
    int fn = f0 + f1;
    printf("10 so dau tien cua day so Fibonacci: \n");
    for (i = 3; i <= n; ++i) 
    {
        printf("%3d\t",f0,f1,fn);
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }
}

