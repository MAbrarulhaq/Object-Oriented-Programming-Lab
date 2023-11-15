// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int min = a[0];
    for(int i=1;i<5;i++){
        if (min> a[i]){
            min = a[i];
        }
    }
    cout<<"Minimum = "<<min;
}
