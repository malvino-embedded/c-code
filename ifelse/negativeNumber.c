/*
P5.1 Program to print a message if negative number is entered
*/
#include <stdio.h>

int main()
{

    int input;
    printf("Enter the value:");
    scanf("%d", &input);
    if (input < 0)
        printf("The number entered %d is negative\n", input);
    printf("The value of Number is %d", input);
    return 0;
}