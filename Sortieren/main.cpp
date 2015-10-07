#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void shell(int [], int);

int main()
{
    const int N=100;
    int list[N];
    time_t now;

    srand((unsigned) time(&now));
    for (int i=0;i<N;i++)
        list[i]=rand();

    cout<<"unsortiert:\n";
    for (int i=0;i<N;i++)
        cout<<list[i]<<"\t";
    cout<<"\n";

    shell(list,N);

    cout<<"\sortiert:\n";
    for (int i=0;i<N;i++)
        cout<<list[i]<<"\t";

    cout<<"\n";
    return 0;
}

void shell(int a[], int n)
{
    for (int gap=n/2;gap>0;gap=gap/2)
        for (int i=gap;i<n;i++)
            for (int j=i-gap;j>=0 && a[j]>a[j+gap];j-=gap)
            {
                int h=a[j];
                a[j]=a[j+gap];
                a[j+gap]=h;
            }

}
