#include<stdio.h>


void funA(int n)
{
    void funB(int);

    if (n > 0)
    {
        printf("%d ",n);
        funB(n-1);
    }
}

void funB(int n)
{
    void funB(int);
    
    if (n > 0)
    {
        printf("%d ",n);
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}