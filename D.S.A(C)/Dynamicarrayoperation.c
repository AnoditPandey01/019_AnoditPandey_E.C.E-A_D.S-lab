#include<stdio.h>
#include<stdlib.h>
int main(){
  int  n , m ,in,val,p;
     printf("Size of array to be entered");
     scanf("%d",&n);
     int* a = (int*) malloc(n * sizeof(int));
     printf("enter the array");
     for (int i = 0; i < n; i++)
     {
         scanf("%d",&a[i]);
     }
     printf("\nelements of array \n");
     for (int i = 0; i < n; i++)
     {
        printf("%d ",a[i]);
     }
    printf("\nEnter 1. for searching\n 2. for array reversal\n 3. to update elements\n 4. to insert element at specific position\n 5. To delete an element from a specified position\n 6. Sorting an array");
    scanf("%d",&val); 
    while(val!=0)
    {    
    switch(val)
    {
      // traverse and search element in an aray //
      case 1:
     printf("\nEnter no. to be searched\n");
     scanf("%d",&m);
     for (int i = 0; i < n; i++)
     {
       if (a[i] == m)
       {
        printf("Number found\n");
        break;
       }
     }
     break;
     case 2:
     //array reversal
     for(int i=0;i<n/2;i++)
     {
      int t=a[i];
      a[i]=a[n-i-1];
      a[n-i-1]=t;
     }
     printf("Reversed Array: \n");
     for (int i = 0; i < n; i++)
     {
      printf("%d ",a[i]);
     }
     break;
     case 3:
     //updating element
     for(int i=0;i<n;i++)
     {
      if(a[i]%2==0)
      printf("%d ",a[i]*2);
      else 
      printf("%d ",a[i]+5);
     }
     break;
     case 4:
     // adding of an element in the array //
     a= realloc(a, (n+1)*sizeof(int));
     printf("Enter index in which it needs to be entered");
     scanf("%d",&in);
     for (int i = n; i>in ; i--)
     {
          a[i]=a[i-1];
     }
    printf("Enter the element to be added");
    scanf("%d",&a[in]);
    for (int i = 0; i<n+1 ; i++)
    {
      printf("%d ",a[i]);
    }
    break;
     // removing of the element
    case 5:
    printf("Enter the element to be removed");
     scanf("%d",&p);
     for (int i = 0; i < n; i++)
     {
       if(a[i]==p)
       {
        a[i]=a[i+1];
        while(i<n+1)
        {
        a[i]=a[i+1];
        i++;
        }
        break;
       }
     }
     printf("\n");
    for (int i = 0; i < n; i++)
    {
      printf("%d ",a[i]);
    }
    break;
    case 6:
    printf("Sorted Array");
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(a[j+1]<a[j])
        {
        int t = a[j+1];
        a[j+1]=a[j];
        a[j]=t;
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    break;
    }
    printf("\nEnter 0.to terminate 1. for searching\n 2. for array reversal\n 3. to update elements\n 4. to insert element at specific position\n 5. To delete an element from a specified position\n 6. Sorting an array");
    scanf("%d",&val);
    }
}
//write a menu driven program to input an array and perform following operations:
//1. Traversal array-Linear search for an element in array
//2. Array reversal
//3. updating the elements of array (Multiply the element at even indicies by 2 and add 5 to the element at odd indices)
//4. inserting an element at specified position
//5. Deleting an element from a speccified position
//6. Sorting an array