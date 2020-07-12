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
    void Display(struct Array arr); 
    void Append(struct Array *arr, int element);
    void Insert(struct Array *arr, int index, int element);
    
    // Code
    struct Array arr = {{2,3,4,5,6}, 10, 5};

    Append(&arr, 15);
    Insert(&arr, 3, 999);
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
    printf("\nDisplay Complete!!");
}

void Append(struct Array *arr, int element)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = element;
    }
    printf("\nAppend Complete!!");
}

void Insert(struct Array *arr, int index, int element)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
               arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = element;
        arr->length++;
    }
    printf("\nInsert Complete!!");
}