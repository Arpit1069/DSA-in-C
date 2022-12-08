#include <stdio.h>
#include <iostream>
using namespace std;

int findmax(int a[], int n)
{
    int i = 0, j = 0;
    for (; i < n; i++)
    {
        if (a[i] > a[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return a[j];
}

void CountSort(int A[], int n)
{
    int i, j, max, *C;

    max = findmax(A, n);
    C = (int *)malloc(sizeof(int) * (max + 1));

    for (i = 0; i < max + 1; i++)
    {
        C[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        C[A[i]]++;
    }

    i = 0;
    j = 0;
    while (j < max + 1)
    {
        if (C[j] > 0)
        {
            A[i++] = j;
            C[j]--;
        }
        else
            j++;
    }
}
int main()

{
    int a[] = {5, 4, 2, 3, 1};
    int x, n = 5;
    CountSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}