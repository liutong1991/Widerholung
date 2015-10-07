#include <iostream>
#include <cmath>
#include <limits>

#define DBL_EPSILON 1e-7
using namespace std;

int main()
{
    double a,b,c,x;
    cout<<"Eingabe x>0:";
    cin>>x;

    x=fabs(x);
    a=(x+1.)/2;
    b=sqrt(x);
    c=x-1;

    while(fabs(a-b)>DBL_EPSILON*1e3)
    {
        a=(a+b)/2;
        b=sqrt(a*b);
    }

    cout<< (3.*c/(2.*b)+a)<<"\n";

    return 0;
}

