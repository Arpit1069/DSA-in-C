

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
int count(struct node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}
int Rcount(struct node *p)
{
    if (p != NULL)
        return Rcount(p->next) + 1;
    else
        return 0;
}
int sum(struct node *p)
{
    int s = 0;

    while (p != NULL)
    {
        s += p->data;
        p = p->next;
    }
    return s;
}
int Rsum(struct node *p)
{
    if (p == NULL)
        return 0;
    else
        return Rsum(p->next) + p->data;
}

int main()
{
    int A[] = {3, 5, 7, 9, 11};
    create(A, 5);
    printf("count %d \n", count(head));
    printf("Sum %d\n",sum(head));
}
