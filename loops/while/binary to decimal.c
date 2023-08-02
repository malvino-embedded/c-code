/*P5. 12 Program to convert a binary number to a decimal number*/

#include <stdio.h>
int input, inputsave, rem = 0, decimal = 0, j = 1, d = 0;
int main()
{
    printf("Enter the Binary Number: ");
    scanf("%d", &input);
    inputsave = input;

    while (input > 0)
    {
        rem = input % 10;
        d = rem * j;
        decimal = decimal + d;
        j = j * 2;
        input = input / 10;
    }
    printf("Binary Number = %d \t Decimal Number = %d\n", inputsave, decimal);
    return 0;
}