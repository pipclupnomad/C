#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);
  int x = n;
  while (x != 0) {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x /= 10;
  }
    if(reverse == n)
    {
        printf("\n[%d] is a palindrome !\n",n);
    }
    else
    {
        printf("\n[%d] is not a palindrome !\n",n);
    }
}
