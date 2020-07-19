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
    void Reverse(struct Array *);
    struct Array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    printf("\n Original Array :\n");
    Display(arr);

    Reverse(&arr);

    printf("\n Reversed Array :\n");
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

void Reverse(struct Array *arr)
{
    // Local Function Declaration
    void Swap(int *, int *);

    int i, j;

    for (i = arr->length - 1, j = 0; i > j; j++, i--)
    {
        Swap(&arr->A[i], &arr->A[j]);
    }
}

void Swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
