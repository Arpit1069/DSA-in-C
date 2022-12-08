#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head;

void create(int a[], int n)
{
    int i;
    struct node *temp, *last;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *p)
{
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void RDisplay(struct node *p)
{
 if(p!=NULL)
 {
 
 printf("%d ",p->data);
 RDisplay(p->next);

 }
}
int main()
{
    int A[] = {3, 5, 7, 9, 11};
    create(A,5);
    display(head);
    RDisplay(head);
}
