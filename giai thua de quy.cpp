#include <stdio.h>
 
int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}
  
int main() {
    int a;
    printf("nhap so can tinh giai thua: ");
    scanf("%d",&a);
    printf("Giai thua cua %d la: %d", a,factorial(a));
    return 0;
}

