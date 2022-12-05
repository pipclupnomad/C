#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct STUDENT
{
    char id[11], name[31], cthoc[31];
    int math, physic;
};
typedef struct STUDENT STU;
int main() 
{
	system("cls");
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
    }
    //IN DANH SACH SV
    printf("\n *** DANH SACH SINH VIEN ***\n");
    printf("ID      HO TEN      CT HOC      TOAN        LY\n");
    for(i=0; i<n; i++)
    {
    	printf("%-s     %-s        %-s        %-d        %-d\n",ds[i].id, ds[i].name, ds[i].cthoc, ds[i].math, ds[i].physic);
    }
    
    //tim kiem sinh vien theo ten
    char ten[11];
    char yesno='y';
    int cnt = 0;

    while(1==1)
    {
        cnt=0;
        getchar();
        printf(" nhap ten SV muon tim: ");
        gets(ten);

        for (int i = 0; i < n; i++)
        {
            if( strcmp(ds[i].name, ten)==0){
                //da tim thay SV co ten theo yc
                printf("%-s     %-s        %-s        %-d        %-d\n",ds[i].id, ds[i].name, ds[i].cthoc, ds[i].math, ds[i].physic);
                cnt++;
            }
        } //ket thuc vong FOR
        if(cnt == 0){
            printf(" >> KO tim thay SV co ten [%s] !!! \n", ten);
        }

        printf(" >> tiep tuc tim NV nua ko (y) ? ");
        yesno = getchar();

        if(yesno != 'y' && yesno !='Y'){
            printf("\nthank you!");
            break;  //ket thuc viec tim kiem NV theo ma so
        }
        
    }

}
