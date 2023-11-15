#include<iostream>
using namespace std;
class Chef{
    protected:
        string name;
    public:
        void setnam(string name){
            this->name=name;
        }
        string getnam(){
            return name;
        }
        void makechicken(){
            cout<<"chicken is made:"<<endl;
        }
        void makesalad(){
            cout<<"salad is made:"<<endl;
        }
        void makespecialdish(){
            cout<<"special dish is made:"<<endl;
        }
};
class Italianchef: public Chef{
    public:
    // void makechicken();
    // void makesalad();
    // void makespecialdish();
        void makepizza(){
            cout<<"pizza is made:"<<endl;
        }
        void makepasta(){
            cout<<"pasta is made:"<<endl;
        }
        void makespecialdish(){
            cout<<"special dish of italian is ready:"<<endl;
        }
};
class Chinesechef: public Chef{
    public:
        void makefriedrice(){
            cout<<"chinese made fried rice:"<<endl;
        }
};
int main(){
    Italianchef i1;
    Chinesechef c1;
    Chef a1;
    a1.setnam("Abrar");
    cout<<"name is:"<<a1.getnam()<<endl;
    cout<<"name through overriding:"<<i1.Chef::a1.getnam()<<endl;
    a1.makespecialdish();
    i1.Chef::makespecialdish();
    i1.makespecialdish();

}