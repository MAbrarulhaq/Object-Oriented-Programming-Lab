// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter the temparature  in Celcius: "<<endl;
    cin>>temp;
    if(temp > 40 ){
        cout<<"Too Hot weather !"<<endl;
    }
    else if(temp > 25){
        cout<<"Hot weather !"<<endl;

    }
    else if(temp< 25 && temp>15){
        cout<<"Normal temparature! "<<endl;
    }
    else if(temp> 0 && temp < 15){
        cout<<"Cold weather! "<<endl;
    }
    else{
        cout<<"Too cold ! "<<endl;
    }
}
