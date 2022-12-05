//Find triplets with zero sum
#include <stdio.h>
#include <stdlib.h>
//n = 5, arr[] = {0, -1, 2, -3, 1} ==> output: 2 (0 + -1 + 1 = 0) (2 + -3 + 1 = 0)
int findTriplets(int a[], int n)
    { 
        int i,j,k,temp,cnt=0;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    if(a[i]+a[j]+a[k] == 0)
                    {
                        cnt++;
                    }
                }
            }
        }
        printf("\nOutput: %d",cnt);
    }
int main()
{
    int t;
    while(1==1)
    {
        printf("\nnhap SL phan tu: ");
        scanf("%d",&t);
        if(t>0 && t<10)
        {
            break;
        }
    }
    int b[t];
    for(int i=0; i<t; i++)
    {
        printf("nhap phan tu thu %d: ",i+1);
        scanf("%d",&b[i]);
    }
    findTriplets(b,t);
}

