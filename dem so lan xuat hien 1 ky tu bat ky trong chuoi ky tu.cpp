#include <stdio.h> 
#include <string.h> 
int main(){ 
    char a[100];// khai bao chuoi a có toi da 100 ky tu
    printf("Nhap vao chuoi ky tu: "); 
    gets(a);
    char c;//khai bao ky tu muon tim
    printf("Nhap vao ky tu muon tim:"); 
    scanf("%c",&c);
    int cnt=0;//khai bao bien cnt
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]==c)
        {//neu a[i] = n thi tang bien cnt len 1
            cnt++;
        }
    }
    if(cnt>0){
        printf("So lan nuat hien cua ky tu %c trong chuoi la: %d",c, cnt);
    }else{
        printf("Ky tu %c khong co trong chuoi!",c);
    }
}
