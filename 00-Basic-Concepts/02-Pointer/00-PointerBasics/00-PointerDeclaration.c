#include<stdio.h>

// Entry point function
int main()
{
    //Local variable declaration
    int iNum = 10;
    int *ptr;

    //Code
    ptr = &iNum;

    printf("\niNum : %d", iNum);            // Will print value of iNum
    printf("\n&iNum : %p", &iNum);          // will print hex address of iNum i.e., L-Value of iNum
    printf("\nptr : %p", ptr);              // will print hex address of iNum i.e., R-Value of ptr
    printf("\n*ptr : %d", *ptr);            // will print value where ptr is pointing
    return 0;
}