#include <stdio.h>
int val;
int main()
{
    printf("Enter the value: ");
    scanf("%d", &val);

    if (val % 2 == 0)
    {
        printf("%d is even Number...\n", val);
    }
    else
    {
        printf("%d is Odd Number...\n", val);
    }
    return 0;
}