/*
    Static Array : Size is decided at compile time
    Dynamic Array : Size is decided at run time
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[5] = {3,1,7,2,4};       // Static Array = Size of array is decided at compile time
    
    int *p;

    // p = new int[5];         // new operator is in C++

    p = (int*)malloc(5*sizeof(int));

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);                 // printing static Array

    printf("\n");

    for (int i = 0; i < 5; i++)
        printf("%d ", *(p+i));                 // printing dynamic Array
    
    
    // delete []p;         // delete operator in C++

    free(p);                // C language

    return 0;
}