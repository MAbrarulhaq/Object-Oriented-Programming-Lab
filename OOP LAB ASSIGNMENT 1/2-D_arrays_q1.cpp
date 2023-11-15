// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int r=3;
    int c=3;
    int a1[r][c];
    int a2[r][c];
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            a1[i][j] = rand();
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            a2[i][j] = rand();
        }
    }
    cout<<"Matrix1: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"MAtrix2: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a2[i][j]<<"\t";
        }
        cout<<endl;
    }
}
