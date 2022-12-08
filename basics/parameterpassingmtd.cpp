#include <stdio.h>
#include <iostream>
using namespace std;

void swap1(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
void swap2(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void swap3(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    int a = 10, b = 15;
    swap1(a, b); // by value
    cout << a << b << endl;
    swap2(&a, &b); // by address
    cout << a << b << endl;
    swap3(a, b); // by reference
    cout << a << b << endl;
}
