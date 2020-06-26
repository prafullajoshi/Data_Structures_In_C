#include<stdio.h>

/**
 * Head Recursion : When recursive call is the very first statement in function i.e., function will perform all processing while returning, then this is known as head recursion.
 * 
 * e.g., in following snippet, fun(n-1) is head recursion
 *      if it would have been fun(n-1) + n then this is also head recursion
 * 
 */


int fun(int n)
{
    if (n > 0)
    {
        fun(n-1);
        printf("%d",n);
    }
    return 0;
}

int main()
{
    fun(5);
    return 0;
}