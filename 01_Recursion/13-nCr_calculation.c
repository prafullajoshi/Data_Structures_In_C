/*
    Function to get nCr : formula for combination
    We can find nCr using pascal's triangle or the below formula:
        nCr = n! / r!(n-r)!
*/

#include<stdio.h>

// This recursive function follows Pascal's triangle
int nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main()
{
    int n = 4, r =2;
    printf("%d-C-%d : %d \n",n, r, nCr(4,2));
    return 0;
}