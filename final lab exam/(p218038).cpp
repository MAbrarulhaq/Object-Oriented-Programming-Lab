#include<iostream>
#include<string>
using namespace std;

class Personalinfo{
    protected:
        string name;
        string bDay;
        int personid;
    public:
        Personalinfo(string name,string bDay,int personid){
            this->name=name;
            this->bDay=bDay;
            this->personid=personid;
        }
        void setpersonalinfo(string name,string bDay,int personid){
            this->name=name;
            this->bDay=bDay;
            this->personid=personid;

        }
        void printpersonalinfo(){
            cout<<"the name os a person:"<<this->name<<endl;
            cout<<"Birthday of a person:"<<this->bDay<<endl;
            cout<<"person ID:"<<this->personid<<endl;
        }
};
class PersonType: public Personalinfo{
    protected:
        string firstname;
        string lastname;
    public:
        PersonType(string firstname,string lastname){
            this->firstname=firstname;
            this->lastname=lastname;

        }
        void setname(string firstname,string lastname){
            this->firstname=firstname;
            this->lastname=lastname;
        }
        string getfirstname(){
            return this->firstname;
        }
        string getlastname(){
            return this->lastname;
        }
        void print(){
            cout<<"firstname:"<<this->firstname<<endl;
            cout<<"lastname:"<<this->lastname<<endl;
        }
};
class DateType: public Personalinfo{
    protected:
        int month;
        int day;
        int year;
    public:
            DateType(int month=1,int day=1,int year=1900)
            {
                this->month=month;
                this->day=day;
                this->year=year;
            }
            void setdate(int month,int day,int year){
                this->month=month;
                this->day=day;
                this->year=year;
            }
            int getday(){
                return this->day;
            }
            int getmonth(){
                return this->month;
            }
            int getyear(){
                return this->year;
            }
            void printdate(){
                cout<<"day:"<<this->day<<endl;
                cout<<"month:"<<this->day<<endl;
                cout<<"year:"<<this->year<<endl;
            }

};
int main(){
    PersonType p1;
    p1.setname("Abrar","Ul Haque");
    p1.print();
    // p1.setpersonalinfo("Abrar","9:10/2001",8038);
    // p1.printpersonalinfo();
    DateType d1;
    d1.setdate(10,9,2001);
    d1.setpersonalinfo("Abrar","9:10:2001",8038);
    d1.printpersonalinfo();
    d1.printdate();
    
}