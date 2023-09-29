/*	---------------------------------------------------------------------------

    Prepare	-->	C	-->	Introduction	--> Pointers in C.

    https://www.hackerrank.com/challenges/pointer-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

---------------------------------------------------------------------------
*/

#include <stdio.h>

void update(int *a, int *b)
{
    int tmp = *a; // Take A Copy Of 'a'.
    *a += *b;     // a_new = Sum of a + b.
    if (tmp > *b) // b_new = Absolute difference.
        *b = tmp - *b;
    else
        *b -= tmp;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}