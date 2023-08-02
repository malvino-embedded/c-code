/*Program to print numbers in reverse order with a difference of 2*/
#include <stdio.h>
int i = 10;
int main()
{
    while (i >= 0)
    {
        printf("%d\t", i);
        i -= 2;
    }

    return 0;
}