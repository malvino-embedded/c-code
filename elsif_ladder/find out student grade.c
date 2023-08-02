/*program to find out the grade of a student when the mark of 4 subjects are given. The method of assigining garde is
-----------------------------------
|per>=85                  grade = A |
|per<85 and per >=70      grade = B |
|per <70 and per >=55     grade = C |
|per <55 and per >=40     grade = D |
|per<40                   grade = E |
-----------------------------------
 */

#include <stdio.h>
int m1, m2, m3, m4, total;
float per;
char grade;
int main()
{
    printf("Enter the English Mark: ");
    scanf("%d", &m1);
    printf("Enter the Tamil Mark: ");
    scanf("%d", &m2);
    printf("Enter the Science Mark: ");
    scanf("%d", &m3);
    printf("Enter the Social Mark: ");
    scanf("%d", &m4);

    total = (m1 + m2 + m3 + m4);
    per = (total / 4);

    if (per >= 85)
        grade = 'A';
    else if (per < 85 && per >= 70)
        grade = 'B';
    else if (per < 70 && per >= 55)
        grade = 'C';
    else if (per < 55 && per >= 40)
        grade = 'D';
    else
        grade = 'E';

    printf("\n\tPercentage is %.1f \n\tGrade is %c\n", per, grade);

    return 0;
}