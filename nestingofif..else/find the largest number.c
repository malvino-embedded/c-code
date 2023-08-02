/*P5.4 Program to find largest number from three given numbers*/
#include <stdio.h>
int a, b, c, largest;
int main()
{
    printf("Enter the Three value: ");
    scanf("%d %d %d", &a, &b, &c);

    // nesting if...else

    if (a > b)
    {
        if (a > c)
            largest = a;
        else
            largest = c;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
    }

    printf("Largest Number is %d", largest);

    return 0;
}