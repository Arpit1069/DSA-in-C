#include <stdio.h>
#include <iostream>
using namespace std;
int sum(int n)
{
    int x;
    if(n==0)
    {
        return 0;
    }
    
    else
    {
      return n+sum(n-1);  
    }
}
int main()
{
    int n,x;
    printf("enter the value :");
    scanf("%d",&n);
    x = sum(n);
    printf("%d",x);
}