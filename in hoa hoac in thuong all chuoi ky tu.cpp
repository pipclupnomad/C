#include <stdio.h> 
#include <string.h>
void Inhoa(char a[])//ham in hoa
{
    for (int i = 0; i<strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')//neu la chu in thuong
        {
            a[i] = a[i] - 32;
        }
    }
}
void Inthuong(char a[])//ham in thuong
{
    for (int i = 0; i<strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')//neu la chu in hoa
        {
            a[i] = a[i] + 32;
        }
    }
}
int main(){ 
    char a[100];// khai bao chuoi a có toi da 100 ky tu
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    printf("\nChuoi vua nhap la: %s", a);
    Inhoa(a);
    printf("\nChuoi in hoa la: %s", a);
    Inthuong(a);
    printf("\nChuoi in thuong la: %s", a);
}
