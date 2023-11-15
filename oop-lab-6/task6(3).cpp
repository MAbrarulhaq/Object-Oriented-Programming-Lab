#include<iostream>
using namespace std;
int main(){
    int a,b,c,*ptra,*ptrb,*ptrc;
    a=5;
    b=4;
    c=7;
    ptra=&a;
    ptrb=&b;
    ptrc=&c;
    if( *ptra>*ptrb && *ptra>*ptrc){
        cout<<"maximum number is:"<<*ptra<<endl;
    }
    else if( *ptrb>*ptra && *ptrb>*ptrc){
        cout<<"maximum number is:"<<*ptrb<<endl;
    }
    else{
        cout<<"maximum number is:"<<*ptrc<<endl;
    }
}