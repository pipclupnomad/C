#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    char yesno ='y';
    while(1==1)
    {
        printf("\nNhap n = ");
        scanf("%d", &n);
        if(n>0)
        {
            if((int)sqrt(n) == sqrt(n))
        	{
        		printf("%d la so chinh phuong!\n", n);
        	}
        	else
        	{
        		printf("%d khong phai so chinh phuong!\n", n);
        	}
        	printf("Continue (y/n): ");
        	scanf("%s",&yesno);
        	if(yesno == 'y' || yesno =='Y')
        	{
        	    continue;
        	}
        	else
        	{
        	    printf("\nthank you !");
        	    break;
        	}
        }
            printf("nhap lai !\n");
    }
}
