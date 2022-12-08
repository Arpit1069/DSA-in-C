#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size, r, f;
    int *Q;
};

void create(struct queue *q,int size)
{
    q->size = size;
    q->f = q->r = -1;
    q->Q = (int*)malloc(q->size*sizeof(int));
}

void enqueue(struct queue *q,int x)
{
    if (q->r == q->size-1)
        printf("queue is full");
    else
        q->r++;
        q->Q[q->r] = x;

}

int dequeue(struct queue *q)
{
    int x=-1;
    if (q->r == q->f)
        printf("queue is empty");
    else
        q->f++;
        x = q->Q[q->f] ;
    return x;
}
void display(struct queue q)
{
    for(int i=q.f+1;i<=q.r;i++)
        printf("%d ",q.Q[i]);
}
int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    display(q);
    dequeue(&q);
    display(q);
}