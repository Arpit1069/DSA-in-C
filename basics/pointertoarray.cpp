#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    //stack memory pointer
    // int A[5]={1,2,3,4,5};
    // int *p;
    // p=A;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<A[i]<<endl;
    //     cout<<p[i]<<endl;
    // }
    //heap pointer
    int *p,*a;
    p=(int *)malloc(5*sizeof(int));//c
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    a=new int[5];//c++
    a[0]=11;
    a[1]=21;
    a[2]=31;
    a[3]=41;
    a[4]=51;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
   delete [ ] p;
   free(p);
}