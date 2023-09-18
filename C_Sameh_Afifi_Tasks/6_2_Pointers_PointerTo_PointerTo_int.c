/*  -------------------------------------------------------------------
    Just write the below statements:(2):
    ------------------------------------

        2. Pointer to pointer to int.


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

    // Declare Pointers to Variable of Type int.
    int **Ptr1;
    int *Ptr2;

    // Assign Pointer to Pointer.
    Ptr1 = &Ptr2;

    // Assign Pointer to Variable.
    Ptr2 = &Variable;

    // Dereference Variable by Pointer to Assign Value inside.
    *Ptr2 = 5;

    // Print value and Address.
    printf("&Ptr1 = %x , Ptr1 = %x , *Ptr1 = %x  , **Ptr1 = %d\n", &Ptr1, Ptr1, *Ptr1, (**Ptr1));
    printf("\t      , &Ptr2 = %x ,  Ptr2 = %x  ,  *Ptr2 = %d\n", &Ptr2, Ptr2, *Ptr2);
    printf("\t\t               ,  &Var = %x  ,    Var = %d\n", &Variable, Variable);

    return 0;
}
