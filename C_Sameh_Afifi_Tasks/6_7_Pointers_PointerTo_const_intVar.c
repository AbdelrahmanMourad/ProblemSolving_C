/*  -------------------------------------------------------------------
    Just write the below statements:(7):
    ------------------------------------

        7. Pointer to constant int.

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
    const int Variable = 7;

    // Declare Pointer to Variable of Type int.
    const int *Ptr;                 // OK: Pointer to const int var.
    // int *const Ptr;              // Error: (1)- const ptr to int var,  without Assigning at initialization.
    // int *const Ptr = &Variable;  // Error: (2)- int pointer to int var, not to const int var.
    // const int *const Ptr;        // Error: (3)- const ptr to const int var, without Assigning at initialization.

    // Assign Pointer to Variable.
    Ptr = &Variable;

    // Dereference Variable by Pointer to Assign Value inside.
    // *Ptr = 5;
    // Error (Due To {const}, can't access or change).

    // Print value and Address.
    printf("&Ptr = %x , Ptr = %x , &Var = %x , Var = %d , *Ptr = %d\n", &Ptr, Ptr, &Variable, Variable, *Ptr);

    return 0;
}
