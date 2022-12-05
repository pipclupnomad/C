#include <stdio.h>
#include <stdlib.h>
int countint(int k)
{
    int count=0;
    while(k>0)
    {
        k/=10;
        ++count;
    }
    return count;
}
int main() 
{
    int n,dem=0,gan;
    system("cls");
    printf("nhap so nguyen duong n: ");
    scanf("%d",&n);
    printf("co [%d] chu so trong so [%d]",countint(n),n);
    
}

