#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// demo dem so nguyen am trong 1 chuoi ky tu
int main()
{
    system("cls");
    printf(" *** Chuong trinh dem so nguyen am va phu am***\n\n");
    char s[81];                   // chuoi s co the chua toi da 80 ky tu
    char vowels[] = "aeiouAEIOU"; // chuoi vowels chua cac nguyen am
	char phuam[] = "aeiouAEIOU "; 
    printf("nhap chuoi ky tu bat ky : ");
    gets(s);

    int n = strlen(s); // bien n chua tong so ky tu cua chuoi s
    int cnt = 0, cnt1 = 0;       // bien cnt chua so nguyen am trong chuoi s

    for (int i = 0; i < n; i++)
    {
        if (strchr(vowels, s[i]) != NULL)
        {
            cnt++;
            printf("%c ", s[i]);
        }
    }
    printf("\n tong so nguyen am trong chuoi [%s] : %d.\n", s, cnt);
   for (int i = 0; i < n; i++)
    {
        if (strchr(phuam, s[i]) == NULL)
        {
            cnt1++;
            printf("%c ", s[i]);
        }
    }
    printf("\n tong so phu am trong chuoi [%s] : %d.\n", s, cnt1);
}

