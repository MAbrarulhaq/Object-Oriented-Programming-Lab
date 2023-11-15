#include<iostream>
using namespace std;
struct time_
{
    int hour;
    int mint;
    int sec;

int convert()
{
    int x=hour*3600;
    int y=mint*60;
    int z=sec*1;
    
    sec=x+y+z;
    return sec;

    }
};
int main(){
    time_ t1;
    cout<<"enter hours";
    cin>>t1.hour;
    cout<<"enter mint";
    cin>>t1.mint;
    cout<<"enter seconds";
    cin>>t1.sec;
    
    cout<<t1.convert();

    
}