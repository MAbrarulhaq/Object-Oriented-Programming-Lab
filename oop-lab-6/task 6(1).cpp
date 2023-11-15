#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    int *ptrA,*ptrB;
    ptrA=&a;
    ptrB=&b;
    cout<<"address of a is:"<<ptrA<<endl;
    cout<<"address of b is:"<<ptrB<<endl;
    cout<<"value of a is:"<<a<<endl;
    cout<<"value of b is:"<<b<<endl;
    int x,y;
    x=*ptrA;
    y=*ptrB;
    cout<<"content using derefrence x:"<<x<<endl;
    cout<<"content using derefrence y:"<<y<<endl;

}