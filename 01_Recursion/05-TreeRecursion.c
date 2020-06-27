#include<stdio.h>

/*
    Tree Recursion : When recursive call is more than once then it is known as Tree Recursion.
    In following example, recursive tree is of 4 levels. The total number of calls made are calculated by the formula : [2^(n+1)]-1. In this example n is 3. fun() is called with value 3. 
*/



int fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
    return 0;
}


int main()
{
    fun(3);
    return 0;
}