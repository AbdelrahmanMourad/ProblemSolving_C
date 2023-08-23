/*
    ------------
    Basics (12):
    ------------
    Write a program :
    -----------------
        to display the following stars patterns.
                     *
                    ***
                   *****
                  *******
                 *********
                 ***   ***
                 ***   ***
                 ***   ***


                *******   *******
               ********* *********
              *********************
               *******************
                *****************
                 ***************
                  *************
                   ***********
                    *********
                     *******
                      *****
                       ***
                        *

*/
#include <stdio.h>

/*  ---------------------------------------------------------------------------
                            Functions ProtoType:
    ---------------------------------------------------------------------------*/

void DrawHome(char rows, char cols);

void DrawHeart(char rows, char cols);

/*  ---------------------------------------------------------------------------
                            Driver Code:
    ---------------------------------------------------------------------------*/
char main()
{
    char rows = 8;
    char cols = 11;

    DrawHome(rows, cols);

    rows = 21;
    cols = 21;

    DrawHeart(rows, cols);

    return 0;
}

/*  ---------------------------------------------------------------------------
                            Functions Implementation:
    ---------------------------------------------------------------------------*/

void DrawHome(char rows, char cols)
{

    // Upper portion of the pattern
    for (char i = 1; i <= rows / 2; i++)
    {
        for (char j = 1; j <= rows - i; j++)
            printf(" ");
        for (char k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }

    // Lower portion of the pattern
    for (char i = 1; i <= rows / 2; i++)
    {
        for (char j = 1; j <= (rows / 2) - 1; j++)
            printf(" ");
        for (char k = 1; k <= rows / 2; k++)
            printf("*");

        printf(" ");
        for (char j = 1; j <= rows / 2; j++)
            printf("*");
        printf("\n");
    }
    printf("\n\n");
}

void DrawHeart(char rows, char cols)
{

    char i, j;

    /* printing top semi circular shapes of heart */
    for (i = rows / 2; i <= rows; i += 2)
    {
        /* Printing Spaces */
        for (j = 1; j < rows - i; j += 2)
        {
            printf(" ");
        }
        /* printing stars for left semi circle */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        /* Printing Spaces */
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        /* printing stars for right semi circle */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }

    /* printing inverted start pyramid */
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }
}
