// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* chuong trinh demo ve lap trinh mang chua cac chuoi ky tu: chua ds ten sinh vien
 - nhap ds ten sv
 - sap xep theo thu tu a-z
 - in ra danh sach */
int main()
{
    system("cls");
    int n;
    while (1 == 1)
    {
        printf("\nvui long nhap so luong sv [3-10]: ");
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
        {
            // fflush(stdin);
            break;
        }
        printf(" \n>> so luong ko hop le. vui long nhap lai !\n");
    }
    // fflush(stdin);

    // nhap xong gia tri cua n, khai bao mang chua ten cua n-sinh vien, chieu dai toi da cu ho ten la 30 ky tu.
    char ds[n][31];
    // vong lap FOR, nhap ho ten cua n-ban sinh vien => ds[]
    for (int i = 0; i < n; i++)
    {
        // fflush(stdin);
        printf(" \n>> nhap ho ten cua sv %d: ", i + 1);
        // gets(ds[i]);
        scanf("%s", ds[i]);
    }
    // 4.sap xep lai bang ten theo thu tu tu a-z
    char temp[31]; // bien trung gian de hoan doi gia tri cua 2 pt trong thuat toan sap xep
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (strcmp(ds[i], ds[k]) > 0)
            {
                strcpy(temp, ds[i]);
                strcpy(ds[i], ds[k]);
                strcpy(ds[k], temp);
            }
        }
    }
    // 3. sau khi nhap du lieu xong, in ra bang danh sach ten sv.
    printf("\n *** Danh sach ho ten sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        puts(ds[i]); // printf("%s\n",ds[i]);
    }
}


