// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int max = a[0];
    for(int i=1;i<5;i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    cout<<"Maximum = "<<max;
}
