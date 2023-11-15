// Name: M.Abrar ul haque
// Roll No: P21 8038
#include<iostream>
using namespace std;

int main()
{
	int arr1[3], arr2[3], c[3];
	
	cout << "Enter the First Array Items =  "<<endl;
	for(int i = 0; i < sizeof arr1[3]; i++)
	{
		cin >> arr1[i];
	}	
	cout << "Enter the Second Array Items =  "<<endl;
	for(int i = 0; i < sizeof arr2[3]; i++)
	{
		cin >> arr2[i];
	}
	for(int i = 0; i < sizeof c[3]; i++)
	{
		c[i] = arr1[i] + arr2[i];
	}
	cout << "Result of adding 2 One Dimensional Arrays = "<<endl;
	for(int i = 0; i < sizeof c[3]; i++)
	{
	cout << c[i] << " ";
	}

}
