#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
// int partition(int a[],int l,int h)
// {
//     int pivot = a[l];
//     int i=l;
//     int j=h;
//     while(i<j)
//     {
//         while(a[i]<=pivot)
//         {
//             i++;
//         }
//         while(a[j]>=pivot)
//         {
//             j--;
//         }
//         if(i<j)
//         {
//             swap(&a[i],&a[j]);
//         }
//         swap(&a[l],&a[j]);
//         return j;
//     }
// }
int partition(int A[],int l,int h)
{
 int pivot=A[l];
 int i=l,j=h;

 do
 {
 do{i++;}while(A[i]<=pivot);
 do{j--;}while(A[j]>pivot);

 if(i<j)swap(&A[i],&A[j]);
 }while(i<j);

 swap(&A[l],&A[j]);
 return j;
}
void quicksort(int a[], int l,int h)
{
   int j;
   if(l<h)
   {
        j= partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
   }
}
int main()

{
    int a[] = {5, 4, 2, 3, 1,INT32_MAX};
    int n = 6;
    quicksort(a,0,n-1);
    for(int i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
}