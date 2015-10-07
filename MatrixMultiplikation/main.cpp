#include <iostream>

using namespace std;

const int N=3;

int main()
{
    int c[N][N];
    static int a[N][N]={{-2, 0, 5},
                      {1, -3, 4},
                      {0, 3, -1}};
    static int b[N][N]={{3, -1, 1},
                      {2, 2, 0},
                      {-2, 1, 4}};

    //Multiplikation
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            int sum=0;
            for (int k=0; k<N; k++)
                sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
            cout<< c[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}

