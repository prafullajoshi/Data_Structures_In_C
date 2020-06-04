#include<stdio.h>

// Entry point function
int main()
{
    //Local variable declaration
    struct Rectangle
    {
        int length;
        int breadth;
    };
    
    // Code
    struct Rectangle Rect = {10, 5};
    struct Rectangle *pRect = &Rect;
    printf("\nStructure members accessed with dot(.) operator :");
    printf("\nRect.length = %d",Rect.length);
    printf("\nRect.breadth = %d",Rect.breadth);

    printf("\nStructure members accessed with asterik(*) and dot(.) operator :");
    printf("\n(*pRect).length = %d",(*pRect).length);
    printf("\n(*pRect).breadth = %d",(*pRect).breadth);

    printf("\nStructure members accessed with arrow(->) operator :");
    printf("\npRect->length = %d",pRect->length);
    printf("\npRect->breadth = %d",pRect->breadth);

    return 0;
}