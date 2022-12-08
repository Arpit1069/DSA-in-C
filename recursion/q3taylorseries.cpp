#include <stdio.h>
#include <iostream>
using namespace std;

double exp(int x , int  n)
{
    double p = 1, f = 1;
    double r;
    if (n==0)
    {
        return(1);
    }
    else
    {
        r = exp(x,n-1);
        p = p*x;
        f = f*n;
        return r + (p/f);
    }
}

int main()
{
   printf("%lf \n",exp(3,10));
   return 0;
}

// double e(int x, int n)
// {
//  static double p=1,f=1;
//  double r;

//  if(n==0)
//   return 1;
//  r=e(x,n-1);
//  p=p*x;
//  f=f*n;
//  return r+p/f;
// }
// int main()
// {
//  printf("%lf \n",e(3,10));
//  return 0;
// }