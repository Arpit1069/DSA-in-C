#include <stdio.h>
#include <iostream>
using namespace std;
int x = 0; //global variable
int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}
int fun2(int n)
{
    if (n > 0)
    {
        // int x = 0; static variable
        x++;
        return fun2(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r,s;
    r = fun1(5);
    s = fun2(5);
    cout << r <<endl;
    cout << s;
}
