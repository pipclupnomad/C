#include <stdio.h>
#include <math.h>
/*
71 /2 = 35 (du 1)
35 /2 = 17 (du 1)
17 /2 = 8 (du 1)
8 /2 = 4 (du 0)
4 /2 = 2 (du 0)
2 /2 = 1 (du 0)
1 /2 = 0 (du 1)
==> dem nguoc len 1000111
*/
int main() 
{
    int n,i,a[100],cnt=0;
    while(1==1)
    {
        printf("\nnhap so bat ky: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("\nvui long nhap lai !");
    }
   for(i=0;n>0;i++)  
    {  
        a[i]=n%2;  
        n/=2;  
        cnt++;
    }  
    printf("\nDang nhi phan cua so vua nhap la = ");  
    i=cnt-1;
    while(i>=0)
    {
        printf("%d",a[i]);  
        i--;
    }
}
