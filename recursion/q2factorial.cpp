#include <stdio.h>
#include <iostream>
using namespace std;
int fac(int n)
{
    int x;
    if(n==0)
    {
        return 1;
    }
    
    else
    {
      return n*fac(n-1);  
    }
}
int main()
{
    int n,x;
    printf("enter the value :");
    scanf("%d",&n);
    x = fac(n);
    printf("%d",x);
}