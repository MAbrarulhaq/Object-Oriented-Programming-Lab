#include<iostream>
using namespace std;
class Ship{
    private:
         int shipnumber;
        float length;
        float width;
        double weight;
        static int count;
    public:
        Ship();
        Ship(float length,float width,double weight,int shipnumber );
        double add_weights(Ship b); const
        int total();
        ~Ship(){
            cout<<"destructor and total ships:"<<this->count<<endl;
        }


};
Ship::Ship(){
            this->length=0;
            this->width=0;
            this->weight=0;
            this->shipnumber=0;
            this->count+=1;
            
        }
Ship::Ship(float length,float width,double weight,int shipnumber ){
             this->length=0;
            this->width=0;
            this->weight=0;
            this->shipnumber=shipnumber;
            this->count+=1;
            cout<<"I am object number:"<<this->count<<endl;
        }
int Ship:: count =0;
double Ship :: add_weights(Ship b) const
        {
            int w;
            w=this->weight+b.weight;
            cout<<"weights of two objects:"<<endl;
            return w;

        }
static int Ship::total(){
            cout<<"total number of ships objects created:"<<this->count<<endl;
            return this->count;
        }
int main(){
    Ship s1,s2(2.3,3.4,67.33333,1),s3(1.1,5.5,22.34444,2);
    s2.add_weights(s3);
    s3.total();
}