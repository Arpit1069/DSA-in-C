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
    struct rectangle r1={10,5};
    printf("%ld \n",sizeof(r1));
    cout<<r1.len<<endl;
    cout<<r1.bre<<endl;
    r1.bre=10;
    r1.len=15;
    cout<<r1.len<<endl;
    cout<<r1.bre<<endl;
    cout<<r1.bre*r1.len;
 }