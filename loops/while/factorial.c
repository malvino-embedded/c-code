/*PS.11 Program to find the factorial of any number
n=n*(n-1)*(n-2)......2*1
4=4*3*2*1
*/

#include <stdio.h>

int n, num;
long fact = 1;

int main()
{
    printf("Enter the Number: ");
    scanf("%d", &n);
    num = n;
    if (n < 0)
        printf("No factorial of negative Number\n");
    else
    {
        while (n > 1)
        {
            fact = fact * n;
            n--;
        }
        printf("factorial of %d = %ld \n", num, fact);
    }
    return 0;
}