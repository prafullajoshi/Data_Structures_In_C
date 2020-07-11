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
    int *A;
    int size;
    int length;
};

int main()
{

    // Function Declaration
    void Display(struct Array arr); 

    // Code
    struct Array arr;
    int n, i;
    printf("Enter the size of array :");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int)); 
    arr.length = 0;

    printf("Enter the length of array :");
    scanf("%d", &n);
    printf("Enter all elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;

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
}