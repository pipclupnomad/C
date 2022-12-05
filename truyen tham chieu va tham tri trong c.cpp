#include<stdio.h>
#include<stdlib.h>
 
void change(int num) {
    num = num + 1;
}

void change(int *num1) {
    *num1 = *num1 + 1;
}
int main() {
	system("cls");
    int x = 100;
    printf("Truoc khi goi phuong thuc x = %d \n", x);
    change(x); // truyen tham tri vao phuong thuc
    printf("Sau khi goi phuong thuc x = %d \n", x);
    
    printf("\n\n");
    
    printf("*** truyen tham chieu va truyen tham tri trong c *** \n");
    int x1 = 100;
    printf("Truoc khi goi phuong thuc x = %d \n", x1);
    change(&x1); // truyen tham chieu vao phuong thuc
    printf("Sau khi goi phuong thuc x = %d \n", x1);
    return 0;
}
