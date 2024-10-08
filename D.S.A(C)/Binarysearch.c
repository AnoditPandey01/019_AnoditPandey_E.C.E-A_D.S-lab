#include <stdio.h>
//binary search iteratively in an array.
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid +1; 
        }
        else
        {
            high = mid-1 ;
        }
    }
    return -1;

}
// //binary search in an array using recursion
// int binary(int e, int arr[e], int s, int x) {
//     if (s <= e) {
//         int m = (s + e) / 2;
//         if (arr[m] == x)
//             return 1; // Element found
//         else if (arr[m] < x)
//             return binary(e, arr, m + 1, x);
//         else
//             return binary(m - 1, arr, s, x);
//     }
//     return -1; // Element not found
// }
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int size = 7;
    printf("%d", binarysearch(arr, size,8));
    return 0;
}