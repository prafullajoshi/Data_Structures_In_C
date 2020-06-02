#include<stdio.h>

// main function
int main()
{
    // Code
    int iArr[5];                                    // Array declaration
    int iArr1[] = { 1, 2, 3, 4, 5 };                // In-line initialization
    int i = 0;

    iArr[0] = 1;                                    // Piece-Meal Initialization
    iArr[1] = 2;
    iArr[2] = 3;
    iArr[3] = 4;
    iArr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        iArr[i] = (i + 1) * 10;                     // Loop Initialization
        printf("\n%d", iArr[i]);
    }
    return 0;
}