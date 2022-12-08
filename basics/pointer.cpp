#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p;
    p=&a;
    cout<<a<<endl;
    cout<<p<<endl;//address of a
    printf("using pointers : %d \n",*p);
}