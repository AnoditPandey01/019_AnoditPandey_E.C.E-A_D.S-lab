#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int* arr;
};
int isEmpty(struct queue *q) {
    if (q->r == q->f) {
        return 1;
    }
    return 0;
}
           

int isFull(struct queue *q) {
    if (q->r == q->size - 1) {
        return 1;
    }
    return 0;
}

int enqueue(struct queue *q , int val) {
    if (isFull(q)) {
        printf("Queue Overflow");
    } 
    else {
        q->r = q->r + 1;
        q->arr[q->r] = val; 
    }
}

int dequeue(struct queue *q) {
    int a =-1;
    if (isEmpty(q)) {
        printf("queue is Empty");
    } 
    else {
        q->f++;
        a = q->arr[q->f];  
    }
    return a ;
}

int main() {
    struct queue q;
   q.size = 5
   q.f = q.r = -1;
   q.arr = (int*)malloc(q.size * sizeof(int)); 
    // if(isEmpty(&q)){
    //     printf("Queue is Empty");
    // }
    //  enqueue(&q , 15); 
    //  enqueue(&q , 19);
//      if(isFull(&q)){
//         printf("Queue Overflow ");
//      }
//      if(isEmpty(&q)){
//         printf("Queue is Empty");
//     return 0;

// printf("The dequeued element is %d\n" , dequeue(&q));
// printf("The dequeued element is %d\n" , dequeue(&q));
// printf("The dequeued element is %d\n" , dequeue(&q));
}
