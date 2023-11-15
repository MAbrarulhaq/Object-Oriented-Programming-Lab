#include<iostream>
using namespace std;
class Employee{
    protected:
        string empName;
        int empNumber;
    
    public:
    Employee(){
        cout<<"Default constructor:"<<endl;
        empName="Abrar";
        empNumber=12345;
    }
    Employee(string name,int no){
        cout<<"parameterize constructor:"<<endl;
        empName=name;
        empNumber=no;
    }
    void show(){
        cout<<"employee name is:"<<empName<<endl;
        cout<<"empNumber is:"<<empNumber<<endl;
    }

};
class Manager:public Employee{
    protected:
        char title;
        double clubdues;
    public:
    Manager(){
        cout<<"Default constructor:"<<endl;
        title='A';
        clubdues=23.0;
    }
    Manager(char t,double c, string name, int no):Employee(name,no){
        cout<<"parameterize constructor:"<<endl;
        
         title=t;
         clubdues=c;
    }
    void display(){
        cout<<"manager title  is:"<<title<<endl;
        cout<<"clubdues are:"<<clubdues<<endl;
    }

};
class Scientist:public Employee{
    protected:
        int publication;
    public:
        Scientist(){
            cout<<"Default constructor:"<<endl;
            publication=44;
        }
        Scientist(int p,string name,int no):Employee(name,no){
            cout<<"parameterize constructor:"<<endl;
            publication=p;
        }
        void print(){
             cout<<"scientist publication  is:"<<publication<<endl;
        }

};
class Programmer:public Employee{
    protected:
        double salary;
        string expertise;
    
    public:
        Programmer(){
            cout<<"Default constructor:"<<endl;
            salary=22,000.00;
            expertise="web developer:";
        }
        Programmer(double sal,string exp,string name,int no):Employee(name,no){
            cout<<"parameterize constructor:"<<endl;
            salary=sal;
            expertise=exp;
        }
        void detail(){
            cout<<"salary of an employee is:"<<salary<<endl;
            cout<<"expertise of employee:"<<expertise<<endl;
        }
};
int main(){
    cout<<"-------WITHOUT PARAMETERS:----------"<<endl;
    //Employee e1;
    Manager m1;
    Scientist s1;
    Programmer p1;
    m1.show();
    m1.display();
    s1.print();
    p1.detail();
    
    cout<<"----------WITH PARAMETERS:------------"<<endl;
    //Employee e2("M.Abrar ul haque",234);
    Manager m2('A',22.0,"M.Abrar ul haque",234);
    Scientist s2(33,"M.Abrar ul haque",234);
    Programmer p2(76000.0,"flutter expert","M.Abrar ul haque",234);
    m2.show();
    m2.display();
    s2.print();
    p2.detail();
    
}