/*
    Print fibonacci series to get n'th fibonacci series number
*/

#include<stdio.h>
#include<string.h>

// ITERATIVE FUNCTION  :: Time taken for this function is O(2^n) => faster
int fiboSeries_iterative(int n)
{
    int t0 = 0, t1 = 1, next, i;

    for (i = 2; i <=n; i++)
    {
        next = t0 + t1;
        t0 = t1;
        t1 = next;
    }
    return next;
}

// RECURSIVE FUNCTION  :: Time taken for this function is O(2^n) => slower than iterative
// Function calling itself recursively with reduced value of parameter then it is known as excessive recursion
int fiboSeries_recursive(int n)
{
    if (n <= 1)
        return n;
    return fiboSeries_recursive(n-2) + fiboSeries_recursive(n-1);
}


// MEMOIZATION : Optimization technique which is used to speed up the programs by storing results of expensive function call
// We'll write above recursive function with this technique i.e., we'll store values in array so that further calls will be reduced
int F[10];
int fiboSeries_optimized(int n)
{
   
    
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2] == -1)
            F[n-2] = fiboSeries_optimized(n-2);
        if(F[n-1] == -1)
            F[n-1] = fiboSeries_optimized(n-1);
        //F[n] = F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }
    
    
}

int main()
{
    // Iterative
    printf("Iterative output : %d \n",fiboSeries_iterative(7));
    
    // Recursive
    printf("Recursive output : %d \n",fiboSeries_recursive(7));
    
    // Recursive with Optimization
    // Initializing array to -1
    memset(F, -1, 10 * sizeof(F[0]));

    printf("Recursive output with optimization : %d \n",fiboSeries_optimized(7));
    
    return 0;
}