#include <stdio.h>

int main ()
{
    int num;
    
    printf("Enter an int number: \n");
    scanf("%d", &num);
        
    printf("The factorials numbers are: %d\n", fac(num));
    
    
}

int fac (int num1)
{
    if(num1 == 1)
    {
        printf(" 1 = ");
        return 1;
    }
    else
    {
        printf(" %d * ", num1);
        return num1 * fac(num1 - 1);
    }
    
}
