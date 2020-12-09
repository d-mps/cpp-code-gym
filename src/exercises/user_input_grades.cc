/**
 *  Description:  Create a program that asks for someones grade (numerical, value, int),
 *  and prints out whether or not they passed.
 * 
 * @author Diana Spencer
*/
#include <iostream>

int main()
{
    unsigned int score;
    char grade;

    printf("Enter your grade (0-100): ");
    std::cin >> score;

    if (score >= 70) {
        printf("Passed.");
    } else {
        printf("Did not pass.");
    }
    
    printf("\nIF-ELSE statements\n");


    if (score >= 90) {
        grade = 'A';
        printf("Grade is A");
    } else if (90 > score && score >= 80) {
        grade = 'B';
        printf("Grade is B");
    } else if (80 > score && score >= 70) {
        grade = 'C';
        printf("Grade is C");
    } else if (70 > score && score >= 60) {
        grade = 'D';
        printf("Grade is D");
    } else {
        grade = 'F';
        printf("Grade is F");
    }

    printf("\nSWITCH-CASE statements\n");

    switch (grade)
    {
    case 'A':
        printf("Grade is A");
        break;
    case 'B':
        printf("Grade is B");
        break;
    case 'C':
        printf("Grade is C");
        break;
    case 'D':
        printf("Grade is D");
        break;
    default: /* catch all */
        printf("Grade is F");
        break;
    }

    printf("\n");

    return 0;
}
