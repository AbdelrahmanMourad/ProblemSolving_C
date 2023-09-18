/*  -------------------------------------------------------------------
    Just write the below statements:(1):
    ------------------------------------

        1. Pointer to int.

*/

/*  ---------------------------------------------------------------------------
                            Included Libraries:
    ---------------------------------------------------------------------------*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Driving Code:
    ---------------------------------------------------------------------------*/

int main()
{
    // Declare Variable of Type int.
    int Variable;

    // Declare Pointer to Variable of Type int.
    int *Ptr;

    // Assign Pointer to Variable.
    Ptr = &Variable;

    // Dereference Variable by Pointer to Assign Value inside.
    *Ptr = 5;

    // Print value and Address.
    printf("&Ptr = %x , Ptr = %x , &Var = %x , Var = %d , *Ptr = %d\n", &Ptr, Ptr, &Variable, Variable, *Ptr);

    return 0;
}
