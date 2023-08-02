/*P5.15 Program to find the sum of numbers entered*/
#include <stdio.h>
int num, sum = 0,count=0;
int main(void)
{
    do
    {
        printf("Enter the %d Number: ",count);
        count++;
        scanf("%d", &num);
        sum += num;

    } while (num != 0);
    printf("sum is %d\n", sum);

    return 0;
}