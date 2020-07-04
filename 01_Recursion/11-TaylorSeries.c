/*
    Return Taylor Series using Static variable. To check what is Taylor Series, please go to this link : "https://www.mathsisfun.com/algebra/taylor-series.html"
*/

#include<stdio.h>


int taylorSeries(int x, int n)
{
    static int p = 1, f = 1;
    int r;

    if(n==0)
        return 1;
    r = taylorSeries(x, n);
    p = p * x;
    f = f * n;
    return r + p/f;
}

int main()
{
    printf("%lf \n",taylorSeries(2,5));
    return 0;
}