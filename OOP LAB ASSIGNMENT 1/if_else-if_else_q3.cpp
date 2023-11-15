// Name: M.Abrar ul haque
// Roll No: P21 8038
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks >= 90){
        cout<<"Your Grade is A+";
    }
    else if (marks >= 80){
        cout<<"Your Grade is A";
    }
    else if (marks >= 70){
        cout<<"Your Grade is B+";
    }
    else if (marks >= 60){
        cout<<"Your Grade is B";
    }
    else if (marks >= 50){
        cout<<"Your Grade is D";
    }
    else{
        cout<<"Sorry you are fail! ";
    }
}
