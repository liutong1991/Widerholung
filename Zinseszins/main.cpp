#include <iostream>

using namespace std;

int main()
{
    float Kapital,p;
    int jahre;

    cout<<"please enter the kapital:";
    cin>>Kapital;

    cout<<"please enter the Zinssatz:";
    cin>>p;

    cout<<"how many years:";
    cin>>jahre;

    for (int i=0; i<=jahre;i++)
    {
        cout<<i<<"\t"<<Kapital<<endl;
        Kapital*=(1+p/100);
    }
    return 0;
}

