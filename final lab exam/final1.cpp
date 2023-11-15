//pub me
#include<iostream>
#include<string>
using namespace std;

class Publication{
    protected:
        string title;
        float price;
    public:
    // pure virtual function"iosoversize
        

};
class Book:public Publication{
        
    public:
        static int page=1;
        int pagecount(){
            for(int i=0;i<=500;i+=1){
            page+=1;
            }
        }

};
class Tape:public Publication{
    public:
        float mint;
        int hours;
        float playingtime(int hours,float mint){
            if (mint>60){
                hours=mint-60;
            }
            else{
                minutes=mint;
            }
        } 

        

};
int main(){
    Publication *p;

}