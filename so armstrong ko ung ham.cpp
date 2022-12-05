#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,n,r,count=0,s=0;
    while(1==1)
    {
        printf("\nnhap so bat ky: ");
        scanf("%d",&n);        
        if(n>0)
        {
            break;
        }
            printf("\nvui long nhap lai!");
    }
    int x=n;
    while(x>0)
    {
        x/=10;
        count++;
    }
    for(i=n; i>0 ;i/=10)
    {
        r = i%10;
        s += pow(r,count);
    }
    if(s==n)
    {
        printf("so [%d] la so armstrong",n);
    }
    else
    {
        printf("so [%d] khong la so armstrong",n);
    }
}

