// bang cuu chuong
#include <stdio.h>
int main() 
{
    int n,i;
    printf("nhap so de in bang cuu chuong: ");
    scanf("%d",&n);
    printf("bang cuu chuong %d: \n",n);
    for(i=1; i<=10; i++)
    {
        printf("%2d x %2d = %4d\n",n,i,n*i);
    }
}
