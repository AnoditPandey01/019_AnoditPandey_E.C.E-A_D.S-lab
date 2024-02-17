#include <stdio.h>
// Traversing of an array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Insertion
int IndInsertion(int array[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
    return 1;
}
    //Deletion
    void IndDeletion(int array[], int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        array[i ] = array[i+1];
    }
}
int main()
{
    int array[100] = {1, 2, 6, 11, 44};
    int size = 5, element = 45, index = 3;
    display(array, size);
    IndInsertion(array, size, element, 100, index);
    size+=1;
    display(array, size);
    IndDeletion(array,size,index);
    size-=1;
    display(array,size);
    return 0;
}