#include<stdio.h>
#include<stdlib.h>

// Entry point function
int main()
{
    // Local variable declaration
    int *iPtr = NULL;
    
    //Code
    iPtr = (int *)malloc(3 * sizeof(int));  
    /*
    malloc() allocates contigious memory in Heap for specified size i.e.,3 * size of int(array of 3 inetegers) and returns address of first byte. Since it returns address, it's return type is 'void*' and we have to typecast it into the type we want, hence here it is type casted to int* 
    */
    if (iPtr == NULL)
    {
        printf("Memory allocation failed !");
    }
    else
    {
        printf("Memory allocation successful !");
    }
    return 0;
}