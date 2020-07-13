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
    int Delete(struct Array *arr, int index);
    void Display(struct Array arr);
    
    // Code
    struct Array arr = {{2,3,4,5,6}, 10, 5};

    Display(arr);
    printf("Deleted Element :%d", Delete(&arr, 15));
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

int Delete(struct Array *arr, int index)
{
    if (index >=0 && index <= arr->length)
    {
        int removedElement = arr->A[index];
        for (int i = index; i < arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1]; 
        }
        arr->length--;
        printf("\nElement Deleted!!");
        return removedElement;        
    }
    else
    {
        printf("\nInvalid Index To Delete!");
        exit(0);
    }    
}
