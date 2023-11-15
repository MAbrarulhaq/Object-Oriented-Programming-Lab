#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"type a number in celcius"; // type number and press enter
    cin>>n; // Get user input from the keyboard
    int celcius=n;
    cout<<celcius<<endl;
    int fahrenh=celcius * 9/5 +32;
    cout<<"fahrenh ="<<fahrenh<<endl;
    return 0;


}