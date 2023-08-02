/*PS.10 Program to find the product of digits of any number*/
/*
given digits is 4321

*/
#include <stdio.h>
int digits, product = 1, rem;
int main()
{
    printf("Enter The Product Digits: ");
    scanf("%d", &digits);

    while (digits > 0)
    {
        rem = digits % 10;
        product = product * rem;
        product /= 10;
    }
    printf("The Product of digits is %d\n",product);

    return 0;
}