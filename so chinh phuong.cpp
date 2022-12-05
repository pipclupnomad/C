// so chinh phuong
//4, 9, 16, 25, 36, 49, 64, 81, 144, 225, 576
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("\nNhap n = ");
    scanf("%d", &n);
	if((int)sqrt(n) == sqrt(n)) 
	// (int)sqrt(9) == 3
	//(int)sqrt(3) = 1 != sqrt(3) = 1.7
	{
		printf("%d la so chinh phuong!\n", n);
	}
	else
	{
		printf("%d khong phai so chinh phuong!\n", n);
	}
}
