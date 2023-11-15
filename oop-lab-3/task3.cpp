#include<iostream>
using namespace std;
int main(){
    int result=0;
    int a;

    cout<<" enter the number: ";

    cin>>a;

    result=result*10 + (a%10);

    a=a/10;

    result=result*10 + (a%10);

    a=a/10;

    result=result*10 + (a%10);

    a=a/10;

    cout<<" the reversed number is: ";
    
    cout<<result;

}
