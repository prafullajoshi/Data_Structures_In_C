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
    void ShiftNegatives(struct Array *);
    struct Array arr = {{2, 3, -9, 16, 18, -21, 28, 32, -35}, 10, 9};

    printf("\nOriginal Array :\n");
    Display(arr);

    ShiftNegatives(&arr);

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

void ShiftNegatives(struct Array *arr)
{
    void Swap(int *, int *);

    int i, j;

    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;

        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}

void Swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
