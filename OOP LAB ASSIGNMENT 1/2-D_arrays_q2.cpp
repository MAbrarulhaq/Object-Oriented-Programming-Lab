// Name: M.Abrar ul haque
// Roll No: P21 8038
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int A[2][2];
    int Min, Max;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            A[i][j]=rand();
        }
    }
    Max = A[0][0];
    Min = A[0][0];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<A[i][j]<<" ";

            if (A[i][j] > Max)
            {
                Max = A[i][j];
            }
            if (A[i][j] < Min)
            {
                Min = A[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Max: "<<Max<<endl;
    cout<<"Min: "<<Min<<endl;
    return 0;
}
