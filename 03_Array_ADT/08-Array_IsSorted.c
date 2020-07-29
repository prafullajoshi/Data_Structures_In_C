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
    int IsSorted(struct Array *);
    struct Array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    printf("\nArray ::\n");
    Display(arr);

    if (IsSorted(&arr))
    {
        printf("\nArray is sorted :\n");
    }
    else
    {
        printf("\nArray is NOT sorted :\n");
    }

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

int IsSorted(struct Array *arr)
{
    int i, j;

    // i = arr->length - 1;

    for (i = 0; i < arr->length-1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
            return 0;
    }
    return 1;
}
