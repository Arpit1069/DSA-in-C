#include<stdio.h>
#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c = a+b;
    return(c);
}
int main()
{
    int x=10,y=5,z;
    z = add(x,y);
    cout<<z;
}