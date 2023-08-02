/*Program to' print the sum of digits of any number*/
/*
example: digits = 4321
we want to take last digits we have to use %10
*/

#include <stdio.h>
int digits, sum = 0, rem;
int main()
{
    printf("Enter the Digits: ");
    scanf("%d", &digits);

    while (digits > 0)
    {
        rem = digits % 10;    // take the last digit of number
        sum = sum + rem;      // add the digits one by one in revers orde
        digits = digits / 10; // skipping the last digit
    }
    printf("The sum of Total Digits is %d \n", sum);
}