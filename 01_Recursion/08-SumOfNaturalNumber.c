#include<stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    int n = 9;
    int r = sum(n);
    printf("Sum of 1st %d natural numbers : %d", n,r);
    return 0;
}