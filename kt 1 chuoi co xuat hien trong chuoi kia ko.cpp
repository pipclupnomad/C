#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[31], s2[31];
    int i;
    printf("nhap chuoi ky tu s1: ");
    gets(s1);
    printf("nhap chuoi ky tu s2: ");
    gets(s2);
    if(strstr(s2,s1)!=NULL)
    {
        printf("\nchuoi [%s] co xuat hien trong chuoi [%s]\n",s1,s2);
    }
    else
    {
        printf("\nchuoi [%s] khong xuat hien trong chuoi [%s] va nguoc lai\n",s1,s2);
    }
}
