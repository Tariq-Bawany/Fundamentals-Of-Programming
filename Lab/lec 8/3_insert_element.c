/*
Create a program that inserts an element at a specified position in an array.
*/
#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the Values  of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n",i, arr[i]);
    }
    printf("\n");

    int add_index;
    int add_element;
    printf("Enter the Element & and the Position of index:\n");
    scanf("%d", &add_element);
    scanf("%d", &add_index);
    size++;
    for (int i = size - 1; i >= add_index; i--)
    {
        if (i > add_index)
        {
            arr[i] = arr[i - 1];
        }
        if (i == add_index)
        {
            arr[i] = add_element;
        }
        // printf(" %d : %d\n",i , arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n",i, arr[i]);
    }
    printf("\n");
    return 0;
}