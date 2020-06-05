#include<stdio.h>

//Structure Declaration
struct Rectangle
{
    int length;
    int breadth;
};

//Entry Point Function
int main()
{
    //Local FUnction Declaration
    int changeLength(struct Rectangle*, int);
    //Local Variable Declaration
    int newLength = 20;
    struct Rectangle Rect = {10, 5};

    //Code
    printf("\nLength Before Changing :%d", Rect.length);
    changeLength(&Rect, newLength);
    printf("\nLength After Changing :%d", Rect.length);

    return 0;
}

int changeLength(struct Rectangle *myRect, int newLength)
{
    //Code
    myRect->length = newLength;
    return 0;
}