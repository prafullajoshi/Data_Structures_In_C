/*
    Array in C is not dynamically growable so we need to have another bigger size array and make the existing array to point to the new array. See the following program 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
#define NEW_SIZE 10

int main()
{
    //Code
    int *p = (int*)malloc(SIZE * sizeof(*p));
    //memset(p, 11, SIZE*sizeof(int));
    for (int i = 0; i < SIZE; i++)
    {
        // memset(p+i, (i+1)*10, SIZE*sizeof(int));       // Array is initialized with 5 values
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;


    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(p+i));


    // Now if we have to increase the size of this array, then we have to take another array and then make p point to the new array with increased size.

    int *q = (int*)malloc(NEW_SIZE * sizeof(int));

    // memcpy(q, p, sizeof(q));                // Array contents are copied from p to q

    for (int i = 0; i < NEW_SIZE; i++)
    {
       memset(q+i, 0, sizeof(q));       // Array is initialized with 10 values
    }

    for (int i = 0; i < NEW_SIZE; i++)
    {
        memcpy(q+i, p+i, sizeof(q));                // Array contents are copied from p to q
    }
    
    // Once elements are copied to a bigger size array then we have to free the original array in order to avoid memory leak problem futher.

    free(p);

    p = q;          // Make p point to where q is currently pointing i.e., to the new bigger array.

    q = NULL;
    printf("\n");
    for (int i = 0; i < NEW_SIZE; i++)
        printf("%d ", *(p+i));  


    return 0;
}