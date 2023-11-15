#include<iostream>
using namespace std;
class Heater{
    private:
        int temp;
    public:
     Heater(){
        temp=15;
     }
     void warmer(){
        
        temp+=5;
     }
     void cooler(){
        temp-=5;
     }
     int printdetails(){
        return temp;
     }


};
int main(){
    Heater h1;
    char p;
    cout<<"press 1 for warmer, press 2 for cooler:";
    cin>>p;
    if (p=='1'){
        cout<<"the temperature is: ";
        h1.warmer();
        cout<<h1.printdetails()<<endl;
    }
    else if(p=='2'){
        cout<<"the temperature is: ";
        h1.cooler();
        cout<<h1.printdetails()<<endl;
    }
    else
        cout<<"invalid input:";
}