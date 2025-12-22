/*
Create a program that inserts an element at a specified position in an array.
*/
#include <stdio.h>

int main()
{
    // initializing the array
    int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    //  inserting an element in the array
    int add_index = 3;
    size++;
    int size_copy = size;
    int add_element = 19;
    arr[10] =19;
    for (int i = size-1; i >= 0; i--)
    {
        if(i>add_index){
            arr[i] = arr[i-1];
        }
        if(i==add_index){
            arr[i] = add_element;
        }
        printf(" %d : %d\n",i , arr[i]);
    }
    return 0;
}