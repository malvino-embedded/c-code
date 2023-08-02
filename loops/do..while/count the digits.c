/**P5.14 Program to count the digi ts in any number*/
#include <stdio.h>
int n, count = 0, rem;
int main(void)
{
    printf("Enter the digits: ");
    scanf("%d", &n);
    do
    {
        n = n / 10;
        count++;
    } while (n > 0);
    printf("The Number of Digits is %d\n", count);

    return 0;
}