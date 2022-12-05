#include <stdio.h>
int main() 
{
    int num1, num2 ,res;
    char op;
    printf("nhap so n1 = ");
    scanf("%d",&num1);
    printf("nhap so n2 = ");
    scanf("%d",&num2);
    printf("chon phep toan so hoc: ");
    scanf("%s",&op);
    switch(op) 
	{
	    case '+':
	    res = num1 + num2;
	    printf("\n The Sum is : %d", res);
	    break;
	    
	    case '-':
	    res = num1 - num2;
	    printf("\n Number after Subtraction : %d", res);
	    break;
	    
	    case '/':
	    res = num1 / num2;
	    printf("\n Number after Division : %d", (float)res);
	    break;
	    
	    case '*':
	    res = num1 * num2;
	    printf("\n Number after multiplication : %d", res);
	    break;
	    
	    default:
	    printf("\n Invalid");
	    break;
    }
}
