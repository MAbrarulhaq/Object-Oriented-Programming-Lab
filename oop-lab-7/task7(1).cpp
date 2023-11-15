#include<iostream>
using namespace std;

class laptop
{
private:
    string brand;
    string Model;
    int    serial;
    string color;
    float  price;
    float  processorspeed;
    int    Ram;
    float  screensize;
public:
int getdata(){
        brand=dell;
        Model=DellXPS13OLED;
        serial=1234;
        color=black;
        price=90000.0;
        processorspeed=44.0;
        Ram=2;
        screensize=3.4;
}
int upgrade(){
    
        cout<<"the upgraded ram is:";
        cin>>Ram;

    }



int display(){
    cout<<"brand:"<<brand<<endl;
    cout<<"Model:"<<Model<<endl;
    cout<<"serial:"<<serial<<endl;
    cout<<"color:"<<color<<endl;
    cout<<"price:"<<processorspeed<<endl;
    cout<<"Ram :"<<Ram<<endl;
    cout<<"screensize:"<<screensize<<endl;



}
};
int main(){

    laptop l1;
    l1.getdata();
    l1.upgrade();
    l1.display();


    return 0;

}
