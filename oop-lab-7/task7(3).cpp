#include<iostream>
using namespace std;
class tollbooth
{
unsigned int car;
double amt;
public:
tollbooth()
{
car=0;
amt=0;
}
void payingcar()
{
car+=1;
amt+=0.50;
}
void nopayingcar()
{
car+=1;
}
void display()
{
cout<<"Total cars: "<<car;
cout<<"Total amount: "<<amt;
}};
int main()
{
char ch,c;
tollbooth t;
do{
cout<<" 1 for paying \n 2 for nopaying \n 3 for exit \n";
cout<<"Enter choice \n";
cin>>ch;
switch(ch)
{
case'1':
t.payingcar();
cout<<"car added";
break;
case'2':
t.nopayingcar();
cout<<"car added";
break;
case'3':
t.display();
exit(0);
break;
}
cout<<"\n Do you want to continue";
cin>>c;
}
while(c=='y'||c=='Y');
return 0;
}