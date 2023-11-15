n#include<iostream>
#include<string>
using namespace std;
class Serialnumber{
    private:
        string serialnumber;

    public:
         static int count;
        Serialnumber(){
            count++;
            string year="2022";
            string insti="FAST0";
            string cla="00P";
            this->serialnumber = year+insti+to_string(count)+cla;
        }
        void getdata(){
             cout<<"I'm object with serial number: "<<this->serialnumber<<endl;
        }
        static void getcounter(){
            cout<<"the counter run:"<<count<<endl;
        }
};
int Serialnumber::count=0;
int main(){
    Serialnumber s1;
    s1.getdata();
    Serialnumber s2;
    s2.getdata();
    Serialnumber s3;
    s3.getdata();
    Serialnumber s4;
    s4.getdata();
    Serialnumber s5;
    s5.getdata();
    s5.getcounter();
}