#include<stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n-1) * n;
}

int main()
{
    int n = 5;
    int r = fact(n);
    printf("Factorial of %d number : %d", n,r);
    return 0;
}