// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;
int main()
{
	int i=1,num,fact=1;
	cout<<" Enter Any Number: ";
	cin>>num;
	do
	{
		fact=fact*i;
		i++;
	}while(i<=num);
	cout<<"\n Factorial number is: "<<fact;
}
