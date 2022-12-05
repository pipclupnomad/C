#include <stdio.h>
#include <string.h>
int main() 
{
    char c;
    printf("\nnhap 1 ky tu bat ky: ");
    scanf("%c",&c);
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("\nky tu ban nhap la: %c",c);
    }
    else
    {
        printf("\nnhap lai !\n");
    }
}
