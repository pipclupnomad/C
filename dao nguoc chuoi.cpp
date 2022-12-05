#include <stdio.h> 
#include <string.h> 
int main(){ 
    char a[100];// khai bao chuoi a có toi da 100 ky tu
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    printf("Chuoi ly tu vua nhap la: %s",a); 
    strrev(a);
    printf("\nChuoi theo chieu dao nguoc: %s",a);
}
