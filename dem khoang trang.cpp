#include <stdio.h> 
#include <string.h> 
int main(){ 
    char a[31], b[] = " ";
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    printf("Chuoi ky tu vua nhap la :"); 
    printf("%s",a); 
    int cnt = 0;
    for(int i = 0; i < strlen(a); i++)
    {
        if(strchr(b,a[i])!=NULL)
        {
            cnt++;
        }
    }
    printf("\nSo khoang trang co trong chuoi la: %d", cnt);
}
