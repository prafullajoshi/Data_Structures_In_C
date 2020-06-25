#include<stdio.h>


// This function will give the sum of 1st n natural numbers
int fun(int n)
{
    static int x = 0;         // Since x will be added while returning, and since it is static, it's same copy will be used by all function calls.
    if (n > 0)
    {
        x++;
        return fun(n-1) + x;    //  While returning, the value of x will be 5 so everytime 5 will be added => same applies to global variable as well
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d", r);
    return 0;
}