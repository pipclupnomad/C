#include <stdio.h>
#include <math.h>
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
int armstrong(int n)
{
    int r, i, s = 0;
    for (i = n; i > 0; i /= 10) 
    {
      r = i % 10;
      s += pow(r, countint(n));
   }
   if(s == n)
   {
       printf("%4d\t",n);
   }
}
int main() {
    system("cls");
   int a, b, i, r, max, min, s = 0;
   while(1==1)
   {
       printf("\nnhap so a: ");
       scanf("%d",&a);
       printf("\nnhap so b: ");
       scanf("%d",&b);
       if(a>0)
       {
           break;
       }
       printf("nhap lai !");
    }
    max = (a>b) ? a : b;
    min = (a<b) ? a : b;
    printf("cac so armstrong giua [%d] va [%d] la: \n", min, max);
    for(i = min; i <= max; i++)
    {
        armstrong(i);
    }
}

