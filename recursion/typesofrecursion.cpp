#include <stdio.h>
#include <iostream>
using namespace std;
void funB(int n);
void fun1(int n)//tree recursion
{
    if (n > 0)
    {
        printf(" %d", n);
        fun1(n - 1);
        fun1(n - 1);
    }
}
void fun2(int n)//tail recursion
{
    if (n > 0)
    {
        printf(" %d", n);
        fun2(n - 1);
    }
}
void fun3(int n)//head recursion 
{
    if (n > 0)
    {
        fun3(n - 1);
        printf(" %d", n);
    }
}
void funA(int n)//indirect recursion
{
    if (n > 0)
    {
        printf(" %d", n);
        funB(n - 1);
    }
}
void funB(int n)//indirect recursion
{
    if (n > 1)
    {
        printf(" %d", n);
        funA(n/2);
    }
}
int fun(int n)//tree recursion
{
    if (n > 100)
    {
        return n-10;
    }
    else
    {
       return fun(fun(n+11));
    }
}
int main()
{
    int x = 3;
    fun1(x);
    cout<<endl;
    fun2(x);
    cout<<endl;
    fun3(x);
    cout<<endl;
    funA(20);
    int r = fun(96);
    cout<<r <<endl;
   
}

