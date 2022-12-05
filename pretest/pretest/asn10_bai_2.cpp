// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT
{
    int mark;
    char name[31];
};
typedef struct STUDENT STU;
int main() 
{
    int n,i,j;
    while(1==1)
    {
        printf("\nnhap SL hoc sinh can quan ly: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("\nvui long nhap lai !");
    }
    STU ds[n];
    printf(" *** NHAP DANH SACH SINH VIEN *** \n");
    for(i=0; i<n; i++)
    {
        getchar();
        printf("nhap sinh vien thu %d: \n",i+1);
        printf("ten sinh vien: ");
        gets(ds[i].name);
        printf("diem tong: ");
        scanf("%d",&ds[i].mark);
    }
    printf("\n *** DANH SACH SINH VIEN ***\n");
    for(i=0; i<n; i++)
    {
        printf("no: [%d],   ho ten: [%s],   diem tong: [%d]\n",i+1,ds[i].name,ds[i].mark);
    }
    STU temp;
    printf("\n *** DANH SACH BANG DIEM GIAM DAN ***\n");
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ds[i].mark < ds[j].mark)
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("no: [%d],   ho ten: [%s],   diem tong: [%d]\n",i+1,ds[i].name,ds[i].mark);
    }
    printf("\n *** DANH SACH TOP 3 SINH VIEN ***\n");
    for(i=0; i<3; i++)
    {
        printf("no: [%d],   ho ten: [%s],   diem tong: [%d]\n",i+1,ds[i].name,ds[i].mark);
    }
}
