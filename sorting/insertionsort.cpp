#include <stdio.h>
#include <iostream>
using namespace std;

void insertionsort(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int j = i - 1;
        int x = a[i];
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}
int main()

{
    int a[] = {5, 4, 2, 3, 1};
    int n = 5;
    insertionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}