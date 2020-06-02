#include<stdio.h>

// Entry Point Function
int main()
{
    //Local function declaration
    int PrintArray(int[], int);

    // Local variable declaration
    int ArraySize = 5;
    int iArray[] = {1, 2, 3, 4, 5};                 // In-line initialization of Array

    PrintArray(iArray, ArraySize);

    return 0;
}


int PrintArray(int iArray[], int ArraySize)
{
    // Local variable declarations
    int i;

    //Code
    for (i = 0; i < ArraySize; i++)
    {
        printf("\niArray[%d] = %d", i, iArray[i]);
    }
    
    return 0;
}