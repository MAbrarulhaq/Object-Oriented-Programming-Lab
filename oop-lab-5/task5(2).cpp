#include<iostream>
using namespace std;
struct fraction
{
    int numerator;
    int denomenator;
    int numerator1;
    int denomenator1;
int solution()
{
    int s;
s=(numerator*denomenator1)+(numerator1*denomenator)/denomenator*denomenator1;
return s;
}

};
int main()
{
    char d='/';
    fraction q1;
cout<<"enter a number:";
cin>>q1.numerator>>d>>q1.denomenator;
cout<<"enter a number for 1:";
cin>>q1.numerator1>>d>>q1.denomenator1;
cout<<q1.solution();
}