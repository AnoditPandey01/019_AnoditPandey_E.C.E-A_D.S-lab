#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf(" \n");
}
void bubblesort(int *A, int n)
{
    int temp ;
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (A[j] > A[j+1])
            {
                temp =A[j];
                A[j] =A[j+1];
                A[j+1] = temp;
            }
             
        }
    }
}

int main()
{
    int A[] = {2, 8, 11,45,9,14};
    int n = 6;
    printArray(A, n);
    bubblesort(A, n);
    printArray(A, n);

    return 0;
}