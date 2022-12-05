//bai toan nguy hiem
#include <stdio.h>
#include <stdlib.h>
int dan(int k)
{
    int x;
    while(k>1)
    {
        if(k%2==1)
        {
            x = 3*k + 1;
            printf("%d\t",x);
            dan(x);
        }
        else if(k%2==0)
        {
            x = (int)k/2;
            printf("%d\t",x);
            dan(x);
        }
        break;
    }
}
int main() 
{
    system("cls");
    int n;
    char yesno ='y';
    while(1)
    {
        printf("nhap so n: ");
        scanf("%d",&n);
        printf("\n *** day so *** \n");
        dan(n);
        printf("\n Continue (y/n): ");
        scanf("%s",&yesno);
        if(yesno != 'y' && yesno != 'Y')
        {
            printf("\n thank you !");
            break;
        }
        else
        {
            continue;
        }
    }
}
