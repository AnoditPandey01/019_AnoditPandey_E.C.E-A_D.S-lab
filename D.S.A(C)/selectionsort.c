#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf(" \n");
}

void selectionsort(){

    
}
int main()
{
    int A[] = {2, 8, 11, 45, 9, 14};
    int n = 6;
    printArray(A, n);
    selectiontionsort(A, n);
    printArray(A, n);

    return 0;
}