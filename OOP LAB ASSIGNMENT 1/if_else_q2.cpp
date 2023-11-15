// Name:M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: "<<endl;
    cin>>year;
    if(year%400==0){
        cout<<"Its a leap year! "<<endl;
    }
    else if(year%100==0){
        cout<<"Its not leap year! "<<endl;
    }
    else if(year%4==0){
        cout<<"Its a leap year! "<<endl;
    }
    else{
        cout<<"Not a leap year! "<<endl;
    }
}
