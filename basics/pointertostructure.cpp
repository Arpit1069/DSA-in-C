#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle
{
    int len;
    int bre;
};

 int main()
 {
    struct rectangle r={10,5};
    cout<<r.len<<endl;
    cout<<r.bre<<endl;
    
    struct rectangle *p=&r;
    p->len =15;
    p->bre = 10;
    cout<<p->len<<endl;
    cout<<p->bre<<endl;

 }