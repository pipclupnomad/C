#include <stdio.h> 
#include <string.h>
int main(){ 
    char x1[100];// khai bao chuoi x1 có toi da 100 ky tu
    char x2[100];// khai bao chuoi x2 có toi da 100 ky tu
    printf("Nhap vao chuoi x1: "); 
    gets(x1);
    printf("Nhap vao chuoi x2: "); 
    gets(x2);
    printf("\nChuoi vua nhap la: \nx1 = %s\nx2 = %s", x1,x2);
    if(strcmp(x1,x2)==0){
        printf("\nHai chuoi giong nhau!");
    }else{
        printf("\nHai chuoi khac nhau!");
    }
}
