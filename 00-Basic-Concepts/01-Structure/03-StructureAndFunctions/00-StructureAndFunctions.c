#include<stdio.h>

// Strcuture Declaration
struct Rectangle
{
    int length;
    int breadth;
};

int initialize(struct Rectangle *myRect, int length, int breadth)
{
    //Code
    myRect->length = length;
    myRect->breadth = breadth;
    return 0;
}

int changeLength(struct Rectangle *myRect, int newLength)
{
    //Code
    myRect->length = newLength;
    return 0;
}

int area(struct Rectangle myRect)
{
    return myRect.length * myRect.breadth;
}

//Entry Point Function
int main()
{
    //Local Function Declarations
    int initialize(struct Rectangle*, int, int);
    int changeLength(struct Rectangle*,int);
    int area(struct Rectangle);
    
    //Code
    struct Rectangle rect;
    initialize(&rect, 10, 5);
    printf("\nStructure Initialized !");
    changeLength(&rect, 25);
    printf("\nLength Changed !");
    area(rect);
    printf("\nArea Returned !");
    return 0;
}

/*
In C language, this is the highest level of programming that we can do by wrtng a strcuture and functions related to that structure.
*/
