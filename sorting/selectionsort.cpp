#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
void selectionsort(int a[], int n)
{
   
    for (int i = 0; i < n - 1; i++)
    {
        int k;
        for (int j = k=i; j < n; j++)
        {
            if(a[k]>a[j])
            {
                k = j;
            }
            swap(a[i],a[j]);
        }
        
        
    }
}
int main()

{
    int a[] = {5, 4, 2, 3, 1};
    int n = 5;
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}