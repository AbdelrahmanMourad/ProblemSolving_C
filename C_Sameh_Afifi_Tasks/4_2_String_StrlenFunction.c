/*  -------------------------------------------------------------------
    String (2):
    -----------
        2. Write a C function which return the length of strings.
*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
int MyStrLen(char *String);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
int main()
{
    //  Define Two Variables
    char StringArray[100]; //  The word itself
    int Length;            //  The length of the word

    //  Take input lower char from user
    printf("Enter The String:\t\n");
    // fgets(&StringArray);
    // scanf("%s", &StringArray);
    scanf("%99[^\n]", &StringArray); //  To read including the spaces.
    // getchar();                       // Remove the newline character from the input buffer

    //  -------------
    //  Algorithm(1):
    //  -------------
    /*      strlen() is the pre-defined function in <string.h>
                to find the length of a string
    */
    Length = strlen(StringArray);

    //  Display The Length
    printf("Length Of The Given String = %d\n", Length);

    /*  -------------
        Algorithm(2):
        -------------   */

    Length = MyStrLen(StringArray);

    //  Display The Length
    printf("Length Of The Given String = %d\n", Length);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/
int MyStrLen(char *String)
{
    int i;
    for (i = 0; String[i] != '\0'; ++i)
    {
    };

    return i;
}
