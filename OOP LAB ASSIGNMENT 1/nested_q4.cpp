// Name: M.Abrar ul haque
// Roll No: P21 8038
#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main()
{
    int k=5;
    int b=2;

    for(int i = k; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout <<"x" << " ";
        }
        cout <<setw(b);
        b=b+1;
        cout << endl;
    }

    return 0;
}
