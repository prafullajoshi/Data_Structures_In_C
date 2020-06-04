#include<stdio.h>
#include<stdlib.h>      // for malloc()
// Entry point function
int main()
{
    //Local Variable Declaration
    struct Rectangle
    {
        int length;
        int breadth;
    };

    //Code

    struct Rectangle *pRect;

    pRect = (struct Rectangle *)malloc(sizeof(struct Rectangle));        // This memory is allocated in Heap.

    pRect->length = 12;
    pRect->breadth = 9;

    printf("\nStructure members accessed with arrow(->) operator :");
    printf("\npRect->length = %d",pRect->length);
    printf("\npRect->breadth = %d",pRect->breadth);

    return 0;
}