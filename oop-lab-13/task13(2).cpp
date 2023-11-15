#include<iostream>
using namespace std;
class Vehicle{
protected:
    float mileage;
    int price;
public:
    Vehicle(){
        mileage=7.6;
        price=2750000;
    }
    Vehicle(float m,int p){
        mileage=m;
        price=p;
    }
    void print(){
        cout<<"mileage of a vehicle:"<<mileage<<endl;
        cout<<"price of a vehicle is:"<<price<<endl;
    }
};
class Car: public Vehicle{
protected:
    int ownercost;
    string warranty;
    string seatingcap;
    string fueltype;
public:
    Car():Vehicle(){
        ownercost=10000;
         warranty="2 years";
         seatingcap="7 seaters car";
        fueltype="Diesel or petrol";
    }
    Car(int own,string warr,string seats,string ft,float m,int p):Vehicle(m,p){
         ownercost=own;
         warranty=warr;
        seatingcap=seats;
        fueltype=ft;
    }
    void show(){
        cout<<"ownercost of a vehicle:"<<ownercost<<endl;
        cout<<"warranty of a vehicle is:"<<warranty<<endl;
        cout<<"seatingcap of a vehicle:"<<seatingcap<<endl;
        cout<<"fueltype of a vehicle is:"<<fueltype<<endl;

    }
    

    
 };
 class Bike: public Vehicle{
  protected:
    int nocylinder;
    int nogears;
    string coolingtype;
    string wheeltype;
    float fueltank;     
    
 public:
 
    Bike(){
    nocylinder=2;
    nogears=5;
    coolingtype="air  or liquid  or  gas";
    wheeltype="alloys  or  spokes";
    fueltank=15.7;
    }
    Bike(int cylinder,int gears,string cool,string wheel,float tank,float m,int p ):Vehicle(m,p){
    nocylinder=cylinder;
    nogears=gears;
    coolingtype=cool;
    wheeltype=wheel;
    fueltank=tank;
    }
    void detail(){
        cout<<"number of cylinder of a vehicle:"<<nocylinder<<endl;
        cout<<"number of gears of a vehicle is:"<<nogears<<endl;
        cout<<"coolingtype of a vehicle:"<<coolingtype<<endl;
        cout<<"wheeltype of a vehicle is:"<<wheeltype<<endl;
        cout<<"fueltank of a vehicle is:"<<fueltank<<endl;
    }

};
class Audi: public Car{
    protected:
        string model;
    public:
    Audi(){
        model="2021";
    }
    Audi(string mod,int own,string warr,string seats,string ft,float m,int p): Car(own,warr,seats,ft,m,p){
        model=mod;
    }
    void disp(){
        cout<<"model of a car audi is:"<<model<<endl;
    }

};
class Ford: public Car{
    protected:
        string model;
    public:
        Ford(){
            model="1999";
        }
        Ford(string mod,int own,string warr,string seats,string ft,float m,int p): Car(own,warr,seats,ft,m,p){
            model=mod;
        }
        void display(){
        cout<<"model of a car ford is:"<<model<<endl;
    }
        
};
class Bjaj: public Bike{
    protected:
        string selfstart;
    public:
        Bjaj(){
            cout<<"bjaj constructor called:"<<endl;
            selfstart="comfortable";
        }
        Bjaj(string x,int cylinder,int gears,string cool,string wheel,float tank,float m,int p):Bike(cylinder,gears,cool,wheel,tank,m,p ){
            selfstart=x;
        }
        void printf(){
            cout<<"bajaj is comfortable  or not:"<<selfstart<<endl;
        }

};
class TVs: public Bike{
    protected:
        string kickstart;
    public:
    TVs(){
        kickstart="Yes";
    }
    TVs(string k,int cylinder,int gears,string cool,string wheel,float tank,float m,int p):Bike(cylinder,gears,cool,wheel,tank,m,p ){
        kickstart=k;
    }
    void showing(){
        cout<<"TVs is comfortable  or not:"<<kickstart<<endl;
    }

};
int main(){
    cout<<"-------INFORMATION ABOUT CARS THROUGH DEFAULT CONSTRUCTOR:---------"<<endl;
    cout<<"-----FOR AUDI:------"<<endl;
    Audi a1;
    a1.disp();
    a1.show();
    a1.print();
    cout<<"-----FOR FORD:------"<<endl;
    Ford f1;
    f1.display();
    f1.show();
    f1.print();
    cout<<"-----FOR BJAJ:------"<<endl;
    Bjaj b1;
    b1.printf();
    b1.detail();
    b1.print();
    cout<<"-----FOR TVs:------"<<endl;
    TVs t1;
    t1.showing();
    t1.detail();
    t1.print();

     cout<<"-------INFORMATION ABOUT CARS THROUGH PARAMETERIZE CONSTRUCTOR:---------"<<endl;

      cout<<"-----FOR AUDI:------"<<endl;
    Audi a2("2023",20000,"5 Years","5 seater car","Diesel or petrol",6.7,245300);
    a2.disp();
    a2.show();
    a2.print();
    cout<<"-----FOR FORD:------"<<endl;
    Ford f2("Latest",50000,"Lifetime Years","2 seater car","Diesel or petrol",5.6,50000);
    f2.display();
    f2.show();
    f2.print();
    cout<<"-----FOR BJAJ:------"<<endl;
    Bjaj b2("comfortable",2,5,"liquid","Alloys",33.3,90000,35000);
    b2.printf();
    b2.detail();
    b2.print();
    cout<<"-----FOR TVs:------"<<endl;
    TVs t2("comfortable",3,6,"gas","Spokes",22.2,54000,450000);
    t2.showing();
    t2.detail();
    t2.print();

}
