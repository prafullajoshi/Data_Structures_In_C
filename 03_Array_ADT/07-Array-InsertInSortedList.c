#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int main()
{
    void Display(struct Array);
    void Insert(struct Array *, int);
    struct Array arr = {{2, 3, 9, 16, 18, 21, 28, 32}, 10, 8};

    printf("\nOriginal Array :\n");
    Display(arr);

    Insert(&arr, 12);

    printf("\nNew Array :\n");
    Display(arr);

    return 0;
}

void Display(struct Array arr)
{
    //code
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Insert(struct Array *arr, int key)
{
    int i, j;

    i = arr->length - 1;

    // for (i = arr->size - 1; i > 0; i--)
    while(i > 0)
    {
        if (arr->A[i] > key)
        {
            arr->A[i+1] = arr->A[i];
        }
        else
        {
            arr->A[i+1] = key;
            break;
        }
        i--;
    }
    // arr->A[i+1] = key;
    arr->length++;
}
