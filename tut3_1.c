/*Write a program which computes the sum of all perfect squares in the range from 20 to 3000 and prints the value on the screen.
*/


# include <stdio.h>
# include <math.h>

int main()
{
    int input;
    int iSqrt;
    double dSqrt;

    for(input = 20; input < 3000; input ++){

        dSqrt = sqrt(input);
        iSqrt = dSqrt; // casting double -> int   ex. 3.5 -> 3

        if(iSqrt == dSqrt){
            printf("%d is a perfect square.\n", input);

        }


    }


}
