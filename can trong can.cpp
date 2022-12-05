#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float S;
    while(1==1)
    {
        printf("\nnhap n: ");
        scanf("%d",&n);
        if(n>=1)
        {
            break;
        }
            printf("\n vui long nhap lai !\n");
    }
    S = sqrt((float)2);
    for(i = 2; i <= n; i++)
    {
        S = sqrt(2 + S);
    }
    printf("\nTong S = %f", S);
}
