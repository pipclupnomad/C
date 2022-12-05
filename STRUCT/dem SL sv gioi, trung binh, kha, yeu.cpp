#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT
{
    char id[11], name[31], cthoc[31];
    int math, physic, english;
};
typedef struct STUDENT STU;
int main() 
{
    int n,i;
    while(1==1)
    {
        printf("\nnhap SL sinh vien can quan ly: ");
        scanf("%d",&n);
        if(n>0)
        {
            break;
        }
            printf("\nvui long nhap lai !");
    }
    STU ds[n];
    printf(" *** NHAP DU LIEU SINH VIEN ***\n");
    for(i=0; i<n; i++)
    {
        getchar();
        printf("nhap SV thu %d:\n",i+1);
        printf("    ID: ");
        gets(ds[i].id);
        printf("    Ho Ten: ");
        gets(ds[i].name);
        printf("    chuong trinh hoc: ");
        gets(ds[i].cthoc);
        printf("    Diem toan: ");
        scanf("%d",&ds[i].math);
        printf("    Diem ly: ");
        scanf("%d",&ds[i].physic);
        printf("    Diem english: ");
        scanf("%d",&ds[i].english);
    }
    printf("\n *** DANH SACH SINH VIEN ***\n");
    printf("ID      HO TEN      CT HOC      TOAN        LY  ANH        DTB\n");
    for(i=0; i<n; i++)
    {
        printf("%-s     %-s        %s        %d        %d  %d  %d\n",ds[i].id, ds[i].name, ds[i].cthoc, ds[i].math, ds[i].physic, ds[i].english, (ds[i].math + ds[i].physic + ds[i].english)/3);
    }
    
    //dem so trung binh, yeu, gioi
    int yeu=0, gioi=0,kha=0,tb=0;
    
    for(int i = 0; i<n;i++)
    {
        if(((ds[i].math + ds[i].physic + ds[i].english)/3) < 50)
        {
            yeu++;
        }
        else if(((ds[i].math + ds[i].physic + ds[i].english)/3) < 65)
        {
            tb++;
        }
        else if(((ds[i].math + ds[i].physic + ds[i].english)/3) < 80)
        {
            kha++;
        }
        else
        {
            gioi++;
        }
    }
    printf("\nSo sinh vien yeu la: %d", yeu);
    printf("\nSo sinh vien trung binh la: %d", tb);
    printf("\nSo sinh vien kha la: %d", kha);
    printf("\nSo sinh vien gioi la: %d", gioi);

}
