#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void display1()
    {
        cout<<real<<"-"<<imag<<"i"<<endl;
    }
 
 
    Complex operator + (const Complex& c2)
    {
        Complex temp;
        temp.real=real+c2.real;
       temp.imag=imag+c2.imag;
       return temp;
    }
    Complex operator - (const Complex& c2)
    {
        Complex temp;
        temp.real=real-c2.real;
       temp.imag=imag-c2.imag;
       return temp;
    }
    };
int main()
    {
        Complex c1,c2,result;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        cout<<"Sum of two complex numbers is"<<endl;
        result=c1+c2;
        result.display();
        result=c1-c2;
        result.display1();
    return 0;
    }