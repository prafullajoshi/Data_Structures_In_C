/*
    Array Initializatio Types
*/

#include<stdio.h>

int main()
{
    int A[5];                       // Only declaration
    int B[5] = {1,2,3,4,5};         // Initialized all elements
    int C[10] = {1,2,3};            // Initialized only first 3 elements rest are set to 0
    int D[5] ={0};                  // All are initialized to 0
    int E[] = {1,2,3,4,5,6};        // No need to specify the size

    return 0;
}