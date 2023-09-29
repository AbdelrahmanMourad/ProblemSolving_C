/*	---------------------------------------------------------------------------
		
	Prepare	-->	C	-->	Introduction	-->	Sum and Difference of Two Numbers

	https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
		
	----------
	Objective:
	----------
		The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.
		**
		The printf()
			function prints the given statement to the console. 
			The syntax is printf("format string",argument_list);. 
			In the function, if we are using an integer, character, string or float as argument, 
			then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.
		**
		The scanf()
			function reads the input data from the console. 
			The syntax is scanf("format string",argument_list);. 
			For ex: The scanf("%d",&number) statement reads integer number from the console and stores the given value in variable .
		**
		To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where  and  are the two integers.

	-----
	Task:
	-----
		Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

		1-	Declare 4 variables: two of type int and two of type float.
		2-	Read 2 lines of input from stdin 
			(according to the sequence given in the 'Input Format' section below) and initialize your  variables.
		3-	Use the + and - operator to perform the following operations:
				Print the sum and difference of two int variable on a new line.
				Print the sum and difference of two float variable rounded to one decimal place on a new line.

	-------------
	Input Format:
	-------------
		The first line contains two integers.
		The second line contains two floating point numbers.

	------------
	Constraints:
	------------
		1 <= integer variables <= 10^4
		1 <= float variables  <= 10^4
		
	--------------
	Output Format:
	--------------
		Print the sum and difference of both integers separated by a space on the first line, 
		and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.

	-------------
	Sample Input:
	-------------
		10 4
		4.0 2.0

	--------------
	Sample Output:
	--------------
		14 6
		6.0 2.0

	------------
	Explanation:
	------------
		When we sum the integers 10 and 4, we get the integer 14. 
		When we subtract the second number 4 from the first number 10, we get 6 as their difference.
		When we sum the floating-point numbers 4.0 and 2.0, we get 6.0. 
		When we subtract the second number 2.0 from the first number 4.0, we get 2.0 as their difference.

---------------------------------------------------------------------------
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//  Step 1:
    int n1, n2;
    float f1, f2;
    
    //  Step 2:
    scanf("%d %d", &n1, &n2);
    scanf("%f %f",&f1, &f2);
    
    //  Operation:
    int sumint = n1+n2;		int subint = n1-n2;
    float sumflt = f1+f2;	float subflt = f1-f2;
    
    //  Step 3:
    printf("%d %d\n", sumint, subint);      //  sum and sub of int.
    printf("%0.1f %0.1f\n", sumflt, subflt);      //  sum and sub of float.  
    
    return 0;
}
