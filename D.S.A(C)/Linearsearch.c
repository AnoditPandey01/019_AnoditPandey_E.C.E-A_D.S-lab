#include<stdio.h>
int Linearsearch(int arr[], int size,int element){
 for(int i=0;i<size;i++){
    if(arr[i]==element)
        return 1;
 }   
 return -1;
}
int main()
{
  int arr[] = {2,5,22,44,66,88,45};
  int size=sizeof(arr)/sizeof(int);
printf(" %d " , Linearsearch(arr,size,99));

  return 0;
}