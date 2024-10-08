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
        printf("The data is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int InsertionatFIRST(struct Node *ptr , int data ){
  struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
 ptr->next = head ;
 ptr->data = data ;
 return head; 
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for node in the heap in linklist
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second node;
    head->data = 7;
    head->next = second;

    // Link second and third node;
    second->data = 8;
    second->next = third;
    
    // Link third and fourth node;
    third->data = 9;
    third->next = fourth;

    // Link fourth and NULL ;
    fourth->data = 1;
    fourth->next = NULL;

    linklisttraversing(head);
    head = InsertionatFIRST(head , 56);
    linklisttraversing(head);
    return 0;
}