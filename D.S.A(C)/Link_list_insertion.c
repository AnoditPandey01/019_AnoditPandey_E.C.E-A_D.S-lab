#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};
void linklisttraversing(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf (" The Element is : %d \n", ptr->data);
            ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
     struct Node *second;
     struct Node *third;
 
    // Allocate memory for node in the heap in linklist
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second node;
    head->data = 7;
    head->next = second;

    // Link second and third node;
    second->data = 7;
    second->next = third;
    
    // Link third and fourth node;
    third->data = 7;
    third->next = NULL;


    linklisttraversing(head);
    return 0;


}