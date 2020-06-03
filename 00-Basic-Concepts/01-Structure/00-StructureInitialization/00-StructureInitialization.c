#include<stdio.h>

// entry point function
int main()
{
    //Local declarations
    struct Rectangle
    {
        int length;
        int breadth;
    };

    //Code
    struct Rectangle rect;
    rect.length = 12;
    rect.breadth = 9;
    printf("\nRectangle Length :%d", rect.length);
    printf("\nRectangle Breadth :%d", rect.breadth);
    
}