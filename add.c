#include <stdio.h>
#include <stdlib.h>
// assign the variable
int a, b;
// function defanition
int add(int x, int y)
{
    int c = a + b;
    return c;
}
int main(void)
{
    printf("\nEnther the First value: ");
    scanf("%3d", &a);
    printf("\nEnther the Secounf Value: ");
    scanf("%3d", &b);
    int out = add(a, b);
    printf("\n%3d", a);
    printf("\t(+)");
    printf("\n%3d", b);
    printf("\n-------->");
    printf("\n%3d", out);
    printf("\n-------->23");
    return 0;
}