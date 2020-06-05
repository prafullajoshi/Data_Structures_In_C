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
    int area(struct Rectangle);
    //Local Variable Declaration
    struct Rectangle Rect = {10, 5};

    //Code
    printf("\nArea of Rectangle is :%d", area(Rect));

    return 0;
}

int area(struct Rectangle MyRect)
{
    //Code
    //MyRect.length++;
    return MyRect.length * MyRect.breadth;
}