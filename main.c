#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a letter grade: ");

    char grade;
    scanf("%c", &grade);


    switch(grade)
    {
        case 'A':
        case 'a':
            printf("90 - 100");
            break;

        case 'B':
        case 'b':
            printf("80 - 89.9");
            break;

        case 'C':
        case 'c':
            printf("70 - 79.9");
            break;

        case 'D':
        case 'd':
            printf("60 - 69.9");
            break;

        case 'F':
        case 'f':
            printf("0 - 59.9");
            break;

        default:
            printf("No known letter grade.");
            break;
    }


    return 0;
}
