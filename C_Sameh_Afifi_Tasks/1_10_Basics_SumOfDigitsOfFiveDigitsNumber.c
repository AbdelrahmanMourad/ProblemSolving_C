/*  
    -----------
    Basics (10):
    -----------
    
	Prepare	-->	C	-->	Introduction	-->	Sum of Digits of Five Digits Number.

        https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
	    https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
                
            ----------
            Objective:
            ----------
                The modulo operator, %, returns the remainder of a division. 
                    For example, 4 % 3 = 1 and 12 % 10 = 2. 
                The ordinary division operator, /, returns a truncated integer value when performed on integers. 
                    For example, 5 / 3 = 1. 
                To get the last digit of a number in base 10, use  as the modulo divisor.

            -----
            Task:
            -----
                Given a five digit integer, print the sum of its digits.

            -------------
            Input Format:
            -------------
                The input contains a single five digit number, n.

            ------------
            Constraints:
            ------------
                10000 <= n <= 99999
                
            --------------
            Output Format:
            --------------
                Print the sum of the digits of the five digit number.

            -------------
            Sample Input:
            -------------
                10564

            --------------
            Sample Output:
            --------------
                16
---------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    //  Taking the number from user.
    int n;
    scanf("%d", &n);
    
    // Container for digits summation value.
    int     sum     =   0;      
    
    //Complete the code to calculate the sum of the five digits on n.
    while (n!=0)
    {
        sum+= (n%10);   //  Sum the remainder (least number on right).
        n/= 10;         //  remove one digit from right
    }
    
    // Print value of sum to user.
    printf("%d",sum);
    
    return 0;
}


