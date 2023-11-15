#include<iostream>
using namespace std;
class SavingAccount{
private:
    int savingbalance;
public:
    static int monthlyinterest;
    SavingAccount(float b){
         savingbalance=b;
    }
    void MonthlyInterest(){
        int nume=savingbalance*monthlyinterest;
        float s=(float)(nume/12);
        savingbalance+=s;
    }
    void display(){
        cout<<"The new balance of  the saver is: "<<savingbalance<<endl;

    }
    static void modifyinterestrate(){
         int static monthlyinterest=4;
    }


};
int SavingAccount :: monthlyinterest=3;
int main(){

    SavingAccount saver1(2000.00);
    saver1.MonthlyInterest();
    saver1.display();

    SavingAccount saver2(3000.00);
    saver2.MonthlyInterest();
    saver2.display();

    cout<<"----Variation, new balances for saver1 and saver2-----"<<endl;
   
    SavingAccount saver3(2000.00);
    saver1.modifyinterestrate();
    saver1.MonthlyInterest();
    saver1.display();

    SavingAccount saver4(3000.00);
    saver2.modifyinterestrate();
    saver2.MonthlyInterest();
    saver2.display();
}
