/*P5.5 Program to find whether a year is leap or not*/

#include <stdio.h>
int year;
int main()
{
    printf("Enter the Year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("%d is Leap Year\n", year);
        else
            printf("%d is Not Leap Year", year);
    }
    else
    {
        if (year % 4 == 0)
            printf("%d is Leap Year...\n", year);
        else
            printf("%d is non Leap Year...", year);
    }
    return 0;
}

