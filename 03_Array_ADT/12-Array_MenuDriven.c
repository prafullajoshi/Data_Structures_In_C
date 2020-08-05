#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

int main()
{
    // function declaration
    void Insert(struct Array *, int, int);
    int Delete(struct Array *, int);
    int LinearSearch(struct Array *, int);
    int Sum(struct Array *);
    void Display(struct Array *);

    //Code
    struct Array arr1;
    int ch;
    int x, index;

    printf("Enter the size of array :");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr1.length = 0;

    do
    {
        printf("\n\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6.Exit\n");

        printf("Enter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter index and the element to insert :");
            scanf("%d%d", &index, &x);
            Insert(&arr1, index, x);
            break;
        case 2:
            printf("Enter index :");
            scanf("%d%d", &index);
            x = Delete(&arr1, index);
            printf("Deleted element is : %d", x);
            break;
        case 3:
            printf("Enter element to search :");
            scanf("%d", &x);
            index = LinearSearch(&arr1, x);
            printf("Element index is : %d", index);
            break;
        case 4:
            printf("Sum is :%d\n", Sum(&arr1));
            break;
        case 5:
            Display(&arr1);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid choice");
            break;
        }

    } while (ch < 7);
    return 0;
}

void Insert(struct Array *arr, int index, int element)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = element;
        arr->length++;
        printf("\nInsert Complete!!");
    }
}

int Delete(struct Array *arr, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        int removedElement = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        printf("\nElement Deleted!!");
        return removedElement;
    }
    else
    {
        printf("\nInvalid Index To Delete!");
    }
}

int LinearSearch(struct Array *arr, int key)
{
    // Function Declaration
    void Swap(int *, int *);
    //Code
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]); // Transpoition technique : to search next time efficiently
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

int Sum(struct Array *arr)
{
    int i, sum = 0;
    for (i = 0; i < arr->length; i++)
    {
        sum += arr->A[i];
    }
    return sum;
}

void Display(struct Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d", arr->A[i]);
    }
}