#include<stdio.h>

//Entry Point Function
int main()
{
    //Local function declaration
    void swap(int, int);
    // Local variable declaration
    int a, b;
    a = 10;
    b = 20;
    printf("\nBefore swapping :");
    printf("\nA :%d\nB :%d", a, b);
    
    swap(a, b);                                 // Actual Parameters
    
    printf("\nAfter swapping :");
    printf("\nA :%d\nB :%d", a, b);

    return 0;
}

void swap(int x, int y)                         // Formal Parameters
{
    //Local variable declaration
    int temp;

    temp = x;
    x = y;
    y = temp;
}