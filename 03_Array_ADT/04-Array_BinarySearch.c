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
    int BinarySearch(struct Array, int);
    int Recursive_BinarySearch(int[], int, int, int);
    void Display(struct Array);

    // Code
    struct Array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    printf("# Element Found at index %d\n", BinarySearch(arr, 16));

    printf("# With Recursion :: Element Found at index %d\n", Recursive_BinarySearch(arr.A, 0, arr.length - 1, 16));

    Display(arr);

    // printf("\n\n## Element Found at index %d", LinearSearch(&arr, 7));         // Output : 0

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

int BinarySearch(struct Array arr, int key)
{
    // Function Declaration

    int low, high, mid;
    low = 0;
    high = arr.length - 1;

    //Code
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// Binary Search : Recursive Function
int Recursive_BinarySearch(int arr[], int low, int high, int key)
{
    int mid = 0;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            return Recursive_BinarySearch(arr, low, mid - 1, key);
        else
            return Recursive_BinarySearch(arr, mid + 1, high, key);
    }
    return -1;
}
