#include <stdio.h>
int id;
int main()
{
    do
    {
        printf("Enter the Empolyee ID: ");
        scanf("%d", &id);
    } while (id <= 100 || id >= 500);
    printf("%d is valid Id", id);
    return 0;
}