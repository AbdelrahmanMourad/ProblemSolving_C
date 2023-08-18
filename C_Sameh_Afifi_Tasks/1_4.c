/*  
    -----------
    Basiss (4):
    -----------
    Write a program that:
    ---------------------
        take an integer from user and print 
        if this number is prime or not.
*/

#include <stdio.h>

void main (void)
{
    //  Defining Variables:
    int num;
    char PrimeFlag = 1;         //  1: Prime    0: Non-Prime

    //  Taking Values from user:
    printf("please enter num:\n");
    scanf("%d",&num);

    //  ----------
    //  Algorithm:
    //  ----------
    
    //  Check if ==1 or 0 or -ve
    if (num < 1)                          
    {
        //  If Equal To 1 or 0 or -ve , shut the PrimeFlag (Non-Prime)
        PrimeFlag = 0;
        printf("Not A Prime Number\n");
    }
    
    //  Check Prime:
    for (int index=2 ; index<num ; index++)
    {
        //  If accepted div by any other number by itself, shut the PrimeFlag (Non-Prime)
        if(num % index == 0)    
        {
            PrimeFlag = 0;
        }
    }

    //  Check The PrimeFlag:
    if (PrimeFlag == 1)     printf("Prime Number\n");
    else                    printf("Non-Prime Number\n");
    // PrimeFlag == 1 ? printf("Prime Number\n") : printf("Non-Prime Number\n");

}