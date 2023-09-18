/*  -------------------------------------------------------------------
    String (3):
    -----------

        3. Write a C function which swap two strings.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void SwapTwoStrings(char *String1, char *String2);
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
    SwapTwoStrings(ArrayString1, ArrayString2);

    // Print Them After.
    printf("String1:\t%s\n", ArrayString1);
    printf("String2:\t%s\n", ArrayString2);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

/*________________________API_1______________________*/
void SwapTwoStrings(char *String1, char *String2)
{
    char Temp[100];
    char Length1 = MyStrLen(String1);
    char Length2 = MyStrLen(String2);
    char Length3 = 0;

    // Choose the longest to work with.
    // Length1 > Length2 ? Length3 = Length1 : Length3 = Length2; // Error Not Working!!!
    if (Length1 > Length2)
    {
        Length3 = Length1;
    }
    else
    {
        Length3 = Length2;
    }

    // Print Lengthes to Make Sure Everything is OK.
    // printf("Length1 = %d\t,Length2 = %d\t,Length3 = %d\t\n", Length1, Length2, Length3);

    // Do Swap.
    for (int i = 0; i < Length3; i++)
    {
        Temp[i] = String1[i];
        String1[i] = String2[i];
        String2[i] = Temp[i];
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