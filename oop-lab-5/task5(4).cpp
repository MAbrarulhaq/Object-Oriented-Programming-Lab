#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;
    int x1;
    int y1;


};
int main(){
    int z;
    int a;
    point p1;
    cout<<"enter coordinate for p1:";
    cin>>p1.x>>p1.y;
    cout<<"enter coordinate for p2:";
    cin>>p1.x1>>p1.y1;
    z=p1.x+p1.x1;
    a=p1.y+p1.y1;

    cout<<"the coordinates of p3:"<<z<<" "<<a<<endl;
}