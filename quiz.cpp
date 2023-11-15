#include<iostream>
using namespace std;
class Employee{
    private:
        int salary;
        int numofhours;

    public:
        void getinfo(int x, int y){
           
            salary=x;
            
            numofhours=y;
        }
        void addsal(){
            if (salary<=1000){
                salary+=100;
            }
            else
                cout<<"none";
            
        }
        void addwork(){
            if(numofhours>=6 && numofhours<=10){
                salary+=50;
            }
        }
        void displaydetail(){
            cout<<"salary of othe employee:"<<salary<<endl;
            cout<<"number of hours worked:"<<numofhours<<endl;

        }


};
int main(){
    Employee e1,e2,e3;
    e1.getinfo(1500,8);
    e1.addsal();
    e1.addwork();
    e1.displaydetail();
    e2.getinfo(900,8);
    e2.displaydetail();
    e3.getinfo(1000,6);
    e3.addsal();
    e3.addwork();
    e3.displaydetail();
    


}