//sh.
#include<iostream>

using namespace std;
class sterling{
	private:
		float po;
		float s;
		float pen;
	public:
		sterling(){
			po=0;
			s=0;
			pen=0;
		}
		
		sterling(float po, float s, float pen){
			this->po=po;
			this->s=s;
			this->pen=pen;
		}
		void getsterling(double value){//new system	
		//Value (5.13) extract pound(5),shillings(2),peeny(8)
		float v = value*240.0;
		po = int(v/240);
		int temp=int(v)%240;
		s=temp/12;
		pen=temp%12;
		cout<< po<<" "<<s<<" "<<pen<<endl;
				}
};
int main(){
	sterling s;
	s.getsterling(5.13333333);
	
}
// **************************Second solution****************************
#include<iostream>

using namespace std;
class Money{
	private:
		static int num;
	public:
		long pound;
		int shellings;
		int pence;
	
	Money(){
		pound = 0;
		shellings = 0;
		pence = 0;
	}
	Money(double pounds){
		float v = pounds*240;
		pound = v / 240;
		int temp = int(v) % 240;
		shellings = temp / 12;
		pence = temp % 12;
	}
	Money(long pounds, int shellings, int pence){
		this->pound = pounds;
		this->shellings = shellings;
		this->pence = pence;
	}
	
	void getMoney(long pounds, int shellings, int pence){
		this->pound = pounds;
		this->shellings = shellings;
		this->pence = pence;
	}
	void putMoney(){
		cout<<this->pound<<"."<<this->shellings<<"."<<pence;
	}
	void operator + (Money m1){
		this->shellings + m1.shellings;
		cout<<shellings;
	}
};
	

int main(){
	Money m(7.89) , m1(4.53);
	m+m1;
	m.putMoney();
	
}

