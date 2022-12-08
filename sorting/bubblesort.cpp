#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
void bubblesort(int a[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag =1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()

{
    int a[] = {5, 4, 2, 3, 1};
    int n = 5;
    bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}