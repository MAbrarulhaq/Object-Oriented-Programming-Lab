#include<iostream>
using namespace std;
class Meeting{
private:
    string time;
    string location;
    string subject;
public:
    Meeting(){
        time=" ";
        location = " ";
        subject= " ";
    }
    Meeting(string t,string l,string s){
        time=t;
        location =l;
        subject=s;
    }


    Meeting(string l,string s){
        time=" 2:00";
        location =l;
        subject=s;
    }
    Meeting(string t){
        time=t;
        location ="room 205";
        subject=" examiner meetings:";
    }
     void setTime(string t){
         time=t;
   }
   void setLocation(string l){
        location=l;
} 
   void setSubject(string s){
        subject=s;
}
   string getSubject(){
       return subject;
   }
   void printDetails(){
    cout<<"Meeting in room  "<<location <<" "<< "at  " <<time <<" "<<"subject: "<<subject<<endl;
   }
};


int main(){
     Meeting m1;
      m1.printDetails();
    Meeting m2("6:00","205","examinar");
     m2.printDetails();
    Meeting m3("room 787", "exam duty");
     m3.printDetails();
     m3.setTime("2:30");
    Meeting m4("12:30");
    m4.setSubject("examiners meeting duties");
    m4.printDetails();
    Meeting m5("room 787", "exam duty");
    m5.setLocation("director office");
    m5.printDetails();
}