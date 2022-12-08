#include <stdio.h>
#include <iostream>
using namespace std;

struct rectangle
{
int len;
int bred;
};

void fun(struct rectangle *r)
{
    r->len= 20;
    cout<<"len"<<r->len<<"bred"<<r->bred<<endl;//pass by address
}
void fun1(struct rectangle r)
{
    r.len= 20;
    cout<<"len"<<r.len<<"bred"<<r.bred<<endl;//pass by value
}
int main()
{
    struct rectangle r1={10,5};
    fun(&r1);
    fun1(r1);
    cout<<"len"<<r1.len<<"bred"<<r1.bred<<endl;
    
}