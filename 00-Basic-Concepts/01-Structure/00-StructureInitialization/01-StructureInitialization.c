#include<stdio.h>

// Entry point function
int main()
{
    //Structure declaration
    struct Cards
    {
        int face;
        int shape;
        int color;
    };
    
    //Code

    struct Cards deck[3] = { {10, 30, 20}, {20, 40, 10}, {30, 10, 40} };

    printf("\ndeck[0].shape :%d", deck[0].shape);
    printf("\ndeck[1].shape :%d", deck[1].shape);
    printf("\ndeck[2].shape :%d", deck[2].shape);
    printf("\n");
    printf("\ndeck[0].face :%d", deck[0].face);
    printf("\ndeck[1].face :%d", deck[1].face);
    printf("\ndeck[2].face :%d", deck[2].face);
    printf("\n");
    printf("\ndeck[0].color :%d", deck[0].color);
    printf("\ndeck[1].color :%d", deck[1].color);
    printf("\ndeck[2].color :%d", deck[2].color);
}