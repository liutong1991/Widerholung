#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Welche Ordnung(ungerade)?:";
    cin>>n;

    if(n%2==0)
        n++;

    //dynamisches Erzeugen der Matrix
    int **const a=new int*[n];
    for (int k=0; k<n; k++)
        a[k]=new int[n];
    int i=1, j=(n+1)/2; //startposition
    for (int c=1; c<=n*n; c++)
    {
        a[i-1][j-1]=c;
        if (c%n == 0)
            i++;
        else
        {
            i=(i==1)? n:i-1;
            j=(j==n)? 1:j+1;
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\nMagische Zahl ="<< ((n*n*n+n)/2)<<endl;

    //Loeschen der Matrix
    for (i=0;i<n;i++)
        delete [] a[i];
    delete [] a;
    return 0;
}

