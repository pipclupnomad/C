// so hoan hao,vd: 6 = 1+2+3. Voi 1,2,3 la cac uoc so
#include <stdio.h>
int main() 
{
    int n,i,s=0;
    printf("nhap so bat ky: ");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            printf("%4d\t",i);
            s+=i;
        }
    }
    if(s==n)
    {
        printf("\n[%d] la so hoan hao !\n",n);
    }
    else
    {
        printf("\n[%d] khong la so hoan hao !\n",n);
    }
}
