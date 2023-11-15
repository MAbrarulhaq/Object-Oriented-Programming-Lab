#include<iostream>
using namespace std;
class DateofBirth{
private:
    int day;
    int month;
    int year;
public:
    DateofBirth(int day=2, int month=10 , int year=2021){
        if (month<1 && month>12){
            this->month=1;
        }
        if (month>=1 && month<=12 && day>0){
            this->day=day;

        }
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ||){
            if(day>=1 && day<=31){
                this->day=day;
            }
        }
        else if(month==2 || month==4 || month==6 || month==9 || month==11){
            if(day>=1 && day<=30){
                this->day=day;
            }
        }
        else{
            this->day=1;
        }
        if (month>=1 || day>=1){
            if(year>=1900 && year<=2022){
                this->year=2022;
            }
            else{
                this->year=2022;
            }
        }
        

    }
    void prinfunc(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

};
int main(){
    DateofBirth dob;
    dob.printfunc();



}