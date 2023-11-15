// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main()
{
    int m1[2][2], m2[2][2], m3[2][2];
    int i, j, k, sum=0;
    cout<<"Enter 4 Elements for First Matrix: ";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>m1[i][j];
    }
    cout<<"\nEnter 5 Elements for Second Matrix: ";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cin>>m2[i][j];
    }
    // Multiplying two matrices...
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
                sum = sum + (m1[i][k] * m2[k][j]);
            m3[i][j] = sum;
        }
    }
    cout<<"\nMultiplication Result:\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            cout<<m3[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
