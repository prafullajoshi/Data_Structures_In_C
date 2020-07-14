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


#include<stdio.h>
#include<stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

int main()
{

    // Function Declaration
    int LinearSearch(struct Array*, int);
    void Display(struct Array);
    
    // Code
    struct Array arr = {{2,3,4,5,6,7,11,19}, 10, 8};

    printf("# Element Found at index %d\n", LinearSearch(&arr, 7));      // Output : 5
    
    Display(arr);

    printf("\n\n## Element Found at index %d", LinearSearch(&arr, 7));         // Output : 0

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

int LinearSearch(struct Array *arr, int key)
{
    // Function Declaration
    void Swap(int*, int*);
    //Code
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}


void Swap(int *x, int *y)
{
    //Code
    int temp = *x;
    *x = *y;
    *y = temp;
}
