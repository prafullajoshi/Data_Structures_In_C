#include<stdio.h>
#include<stdlib.h>

// Entry Point Function
int main()
{
    //Local function declaration
    int* AllocateMemoryToArray(int);

    // Local variable declaration
    int iArraySize = 5;
    int *iArray = NULL;

    //Code

    iArray = AllocateMemoryToArray(iArraySize);

    if (iArray == NULL)
    {
        printf("Memory allocation failed for array !");
    }
    else
    {
        printf("Memory allocated for array !");
    }
    
    

    return 0;
}

int* AllocateMemoryToArray(int iArraySize)
{
    // Local Variables
    int *iArray = NULL;

    //Code
    iArray = (int*)malloc(iArraySize * sizeof(int));

    return iArray;
}
