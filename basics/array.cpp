#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    for(int i = 0;i<5;i++)
    {
        printf("%d ",A[i]);//c
    }
    for(int x:A)
    {
        cout<<x<<endl; //c++
    }
}    
