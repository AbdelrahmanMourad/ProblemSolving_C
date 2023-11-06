/*  __________________________________________________________________

        ---------------------------------
        File(1): Expressions & Operators:
        ---------------------------------

            -----------------------------------
            Section(1): Mathematical Operators:
            -----------------------------------

                ----------------------------------------
                Problem (010): Eligibility Of Admission:
                ----------------------------------------

                    Write a C program to find the eligibility of admission for
                    a professional course based on the following criteria:
                        Marks in Maths              >=  65
                        Marks in Phy                >=  55
                        Marks in Chem               >=  50
                        Total in all three subject  >=  180
                        Or
                        Total in Math and Subjects  >=  140

                    Test Case:
                        Input:
                            Enter the degree of course one: 50
                            Enter the degree of course two: 52
                            Enter the degree of course three: 72
                        Output:
                            the candidate is not eligible for admission.
    __________________________________________________________________
*/

// Include Library.
#include <stdio.h>

// Driving Code.
int main()
{
    // Declare Variables.
    int M_Maths, M_Phy, M_Chem, M_Total;

    // Take Inputs From User.
    printf("Enter the degree of course one: ");
    scanf("%d", &M_Maths);
    printf("Enter the degree of course two: ");
    scanf("%d", &M_Phy);
    printf("Enter the degree of course three: ");
    scanf("%d", &M_Chem);

    // Algorithm.
    M_Total = M_Maths + M_Phy + M_Chem;

    if (M_Maths >= 65 && M_Phy >= 55 && M_Chem >= 50)
    {
        printf("The Candidate Is Eligible For Admission - Rating(1)");
    }
    if (M_Total >= 180)
    {
        printf("The Candidate Is Eligible For Admission - Rating(2)");
    }
    else if (M_Maths >= 65 && M_Total >= 140)
    {
        printf("The Candidate Is Eligible For Admission - Rating(3)");
    }
    else
    {
        printf("The Candidate Is Not Eligible For Admission");
    }

    return 0;
}