/*  -------------------------------------------------------------------
    Just write the below statements:(4):
    ------------------------------------

        4. Pointer to function which take 2 int and return void.


*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/
void FunctionExample(int a, int b);

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Declare Pointer To Function.
    void (*PointerToFunction)(int, int); //  <-------------------

    // Assign Pointer To Function. {Function Name is Address Of First Line Of it}.
    PointerToFunction = FunctionExample;

    // Call The Function Through The pointer.
    PointerToFunction(1, 2);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
---------------------------------------------------------------------------*/
void FunctionExample(int a, int b)
{
    printf("Example Function Called by Pointer.. Sum = %d", a + b);
}