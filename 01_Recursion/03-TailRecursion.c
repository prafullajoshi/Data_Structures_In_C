#include<stdio.h>

/**
 * Tail Recursion : When recursive call is the last statement in function i.e., function will not perform anything while returning, then this is known as tail recursion.
 * 
 * e.g., in following snippet, fun(n-1) is tail recursion
 *      if it would have been fun(n-1) + n then this is not tail recursion
 * 
 */


int fun(int n)
{
    if (n > 0)
    {
        printf("%d",n);
        fun(n-1);
    }
    return 0;
}

int main()
{
    fun(5);
    return 0;
}