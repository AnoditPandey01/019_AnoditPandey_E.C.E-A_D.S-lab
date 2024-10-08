#include <stdio.h>
#include <stdlib.h>
struct Circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int enqueue(struct Circularqueue *q, int val)
{
    if (q->r + 1 % q->size == q->f)
    {
        printf("The queue is Full");
    }
    else
    {
        q->r = q->r + 1 % q->size;
        q->arr[q->r] = val;
    }
}
int dequeue(struct Circularqueue *q ){
    int val= -1;
    if(q-> r == q->f){
        printf("The Queue is Empty");
    }
    else {
        q->f =q->f+1%q->size;
        val= q->arr[q->f];

    }
    return val; 
}

int main()
{
    struct Circularqueue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 25);
    // dequeue(&q);
    printf("The dequeued element is %d\n" , dequeue(&q));
    return 0;
}
