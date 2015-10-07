#include <iostream>

using namespace std;

int main()
{
    const int n=9;          //Anzahl der Messwerte
    const double h=0.4;     //Schrittweite

    double c=2;
    double quer[]={0, 1.2, 2.42, 3.02, 3.32, 3.6, 3.8, 3.92, 4.0};

    //Simpson Formel
    double volumen=quer[0]+quer[n-1];
    for(int i=1;i<n-1;i++)
        volumen+=(c=6-c)*quer[i];
    volumen*=h/3;
    cout<<"volumen="<<(2*volumen)<<endl;

    return 0;
}

