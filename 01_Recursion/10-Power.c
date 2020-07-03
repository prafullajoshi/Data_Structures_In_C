
/*
    Calculation of exponent i.e., m^n using recursive call
*/

#include<stdio.h>

// This function takes less multiplications internally
int power(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return power(m, n-1) * m;
}

// This function takes less multiplications internally
int power1(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power1(m * m, n/2);
    else
        return m * power1(m * m,(n-1)/2);
}

int main()
{
    int m = 2;
    int n = 5;
    int r = power1(m,n);
    printf("%d to the power %d : %d",m,n,r);
    return 0;
}