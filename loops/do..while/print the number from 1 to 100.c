/*Program to print the numbers from 1 to 10 using do..while loop*/
#include <stdio.h>
int i = 0;
int main()
{
    do
    {
        printf("%d\t", i);
        i++;
    } while (i <= 10);
    printf("\n");
    return 0;
}