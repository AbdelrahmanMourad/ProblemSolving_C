/*  -------------------------------------------------------------------
    String (6):
    -----------

        6. Write a C function to reverse a string.



*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void StringReverse(char *String);
char MyStrLen(char *String);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // For Test Cases.
    char result;

    // Create Two Strings.
    char ArrayString[100] = "Hello Yummy";

    // Print String Before.
    printf("String Normal:\t%s\n", ArrayString);

    // Reverse.
    StringReverse(ArrayString);

    // Print String Before.
    printf("String Reversed:\t%s\n", ArrayString);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

/*________________________API_1______________________*/
void StringReverse(char *String)
{
    char AuxArray[100];
    char Length = MyStrLen(String);

    // Do Reverse.
    for (int i = 0; i <= Length; i++)
    {
        AuxArray[Length - i - 1] = String[i];
    }

    // Do Re-Copy Back.
    for (int i = 0; i < Length; i++)
    {
        String[i] = AuxArray[i];
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