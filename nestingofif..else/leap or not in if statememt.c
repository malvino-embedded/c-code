#include <stdio.h>
int year;
int main(void)
{
    printf("Enter the Year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is leap Year...\n", year);
    else
        printf("%d is non Leap Year..\n", year);
    return 0;
}