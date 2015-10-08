#include <iostream>

using namespace std;

int main()
{
    int i=7, *int_ptr;
    int_ptr=&i;
    cout<< "Zuordnung int_ptr=&i\n";
    cout<< "Der Pointer zeigt auf den Wert" << (*int_ptr)<< "\n";
    cout<< "Die Addresse von i ist" <<int_ptr <<"\n";
    *int_ptr=i;
    cout<< "Zuordnung *int_ptr=i\n";
    cout<< "Der Pointer zeigt auf den Wert" << i<< "\n";
    cout<< "Die Addresse von i ist" << &i<<"\n";

    const int N=10;
    long a[N],*p;
    for (int i=0;i<N;i++)
        a[i]=i;
    p=a;
    for (int i=0;i<N;i++)
        cout<<(*(p+i))<<"\t"<<(p+i)<<endl;
    cout<<endl;
    for (p=a;p<(a+N);p++)
        cout<<(*p)<<"\t"<<p<<endl;
    cout<<" This is the test code of pointer"<<endl;
    cout<<" This is the test code of feature branch"<<endl;
    return 0;
}

