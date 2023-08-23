/*
    -----------
    Basics (8):
    -----------
    Write a program that:
    ---------------------
        reads a student grade percentage and prints
            "Excellent" if his grade is greater than or equal 85,
            "Very Good" for 75 or greater;
            "Good" for 65,
            "Pass" for 50,
            "Fail" for less than 50.
*/

#include <stdio.h>

void grade(char grade)
{
    // Secure if entered number larger than 100.
    if (grade > 100)
        grade = 100;

    // Algorithm
    if (grade >= 85)
        printf("Excellent");
    else if (grade >= 75)
        printf("Very Good");
    else if (grade >= 65)
        printf("Good");
    else if (grade >= 50)
        printf("Pass");
    else
        printf("Fail");
}

void main(void)
{
    unsigned char grade_User;

    // Take grade value from user.
    printf("Please Enter the percentage grade:\n");
    scanf("%d", &grade_User);

    grade(grade_User);
}