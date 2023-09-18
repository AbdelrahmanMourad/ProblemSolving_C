/*  -------------------------------------------------------------------
    String (5):
    -----------

        5. Write a C function to compare two strings (return 0 if not match and one if matched)



*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
char MyStrComp(char *String1, char *String2);
char MyStrLen(char *String);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // For Test Cases.
    char result;

    // Create Two Strings.
    char ArrayString1[100] = "Abdelrahman Mourad";
    char ArrayString2[100] = "Ibrahim ElSayed";

    // Print Them Before.
    printf("String1:\t%s\n", ArrayString1);
    printf("String2:\t%s\n", ArrayString2);

    // Test Case 1:
    result = MyStrComp(ArrayString1, ArrayString2);
    printf("\nTest Case 1:\n");
    printf("A & B Cmp Status = %d", result);

    // Test Case 2:
    result = MyStrComp(ArrayString1, ArrayString1);
    printf("\nTest Case 2:\n");
    printf("A & A Cmp Status = %d", result);

    // Test Case 3:
    result = MyStrComp(ArrayString2, ArrayString2);
    printf("\nTest Case 3:\n");
    printf("B & B Cmp Status = %d", result);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

/*________________________API_1______________________*/
char MyStrComp(char *String1, char *String2)
{
    char status;
    int k = 0;

    while (String1[k] != '\0')
    {

        if (String1[k] == String2[k])
        {
            status = 1;
            k++;
        }
        else
        {
            status = 0;
            break;
        }
    }
    return status;
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