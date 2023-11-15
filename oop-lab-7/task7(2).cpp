#include <iostream>
using namespace std;

class bankAccount{
	private:
		string holderName,accountType;
		int accountNo;
		double balance, interest;
	public:
		void setValue(){
			cout<<"enter the account holders name: ";
			cin>>holderName;
			cout<<"enter the account number: ";
			cin>>accountNo;
			cout<<"enter the account type(checking/saving): ";
			cin>>accountType;
			cout<<"enter the balance: ";
			cin>>balance;
			cout<<"enter the interest rate: ";
			cin>>interest;
		}
		void cutInterest(){
			balance=balance-(balance*interest/100);
		}
		void addBalance(int a){
			balance=balance+a;
		}
		void removeBalance(int a){
			balance=balance-a;
		}
		void display(){
			cout<<"Account holder name is: "<<holderName<<endl;
			cout<<"Account number: "<<accountNo<<endl;
			cout<<"Account type: "<<accountType<<endl;
			cout<<"Current Balance: "<<balance<<endl;
			cout<<"Interest rate: "<<interest<<"%"<<endl;;
		}
};

int main(){
	bankAccount acc[10];
	for(int i=0; i<10; i++){
		acc[i].setValue();
		if(i<9)
		cout<<"now for the next user: "<<endl;
	}
	cout<<"--------------Now for the operations-------------"<<endl;
	cout<<"before adding & interest balance: "<<endl;
	acc[0].display();
	acc[0].addBalance(50000);
	acc[0].cutInterest();
	cout<<"after adding & interest balance: "<<endl;
	acc[0].display();
	
}
