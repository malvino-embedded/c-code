/*P5. 2 Program to print the larger and smaller of the two numbers */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value A : ");
    scanf("%d", &a);
    printf("Enter the value B : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("larger number : %d smaller number : %d", a, b);
    }
    else
    {
        printf("larger number : %d smaller number : %d", b, a);
    }
    return 0;
}