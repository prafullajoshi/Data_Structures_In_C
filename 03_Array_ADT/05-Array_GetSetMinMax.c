/**
 * Data :
 *      1. Array Space
 *      2. Size
 *      3. Length (No of elements)
 * Operations:
 *      1. Display()
 *      2. Add(x) / Append(x)
 *      3. Insert(index, x)
 *      4. Delete(index)
 *      5. Search(x)
 *      6. Get(index)
 *      7. Set(index, x)
 *      8. Max() / Min()
 *      9. Reverse()
 *     10. Shift() / Rotate() 
 * */

/**
 * There are few techniques which are used to improve linear search
 *      1. Transposition:
 *          If we keep on searching the same element again and again, it should be searched more efficiently so we keep in swapping that element with previous one for every search.
*/

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int main()
{

    // Function Declaration
    int Get(struct Array, int);
    void Set(struct Array*, int, int);
    int Max(struct Array);
    int Min(struct Array);
    int Sum(struct Array);
    float Avg(struct Array);
    void Display(struct Array);

    // Code
    struct Array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    printf("# Element Found at index 2 is :%d\n", Get(arr, 2));
    Set(&arr, 5, 999);
    printf("# New element is set at index 5.\n");
    printf("# Max element is :%d\n", Max(arr));
    printf("# Min element is :%d\n", Min(arr));
    printf("# Sum of all elements is :%d\n", Sum(arr));
    printf("# Average of all elements is :%f\n", Avg(arr));

    Display(arr);

    return 0;
}

void Display(struct Array arr)
{
    printf("\nAll elements are :\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    // printf("\nDisplay Complete!!");
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index <= arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int key)
{
    if (index >= 0 && index <= arr->length)
        arr->A[index] = key;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return (float) Sum(arr) / arr.length;
}
