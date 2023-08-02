/*P5.4 Program to find largest number from four given numbers*/
#include <stdio.h>
int a, b, c, d, largest;
int main()
{
    printf("Enter the Four Value: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
            largest = a;
        else largest = c;
        if (c > d)
            largest = c;
        else
            largest = d;
        if (a > d)
            largest = a;
        else
            largest = d;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
        if (b > d)
            largest = b;
        else
            largest = d;
        if (c > d)
            largest = c;
        else
            largest = d;
    }
    printf("Largest Number is %d ", largest);
    return 0;
}