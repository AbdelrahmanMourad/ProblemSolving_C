/*  -------------------------------------------------------------------
    String (4):
    -----------

        4. Write a C function to concatenate two strings.


*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void ConcatinateTwoStrings(char *String1, char *String2);
char MyStrLen(char *String);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Create Two Strings.
    char ArrayString1[100] = "Abdelrahman Mourad";
    char ArrayString2[100] = "Ibrahim ElSayed";

    // Print Them Before.
    printf("String1:\t%s\n", ArrayString1);
    printf("String2:\t%s\n", ArrayString2);

    // Swap the Two Strings.
    ConcatinateTwoStrings(ArrayString1, ArrayString2);

    // Print Them After.
    printf("String1:\t%s\n", ArrayString1);
    printf("String2:\t%s\n", ArrayString2);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

/*________________________API_1______________________*/
void ConcatinateTwoStrings(char *String1, char *String2)
{
    // Calcuate Length of each string.
    char Length1 = MyStrLen(String1);
    char Length2 = MyStrLen(String2);

    int i = Length1;
    int k = 0;

    // Do Swap.
    while (String2[k] != '\0')
    {
        // i from {L1} to {L1+L2}
        // k from {zero} to {L2}
        String1[i] = String2[k];
        i++;
        k++;
    }
}

/*________________________API_2______________________*/
char MyStrLen(char *String)
{
    int Length;

    for (Length = 0; String[Length] != '\0'; ++Length)
    {
        // Do Nothing.
    }
    return Length;
}