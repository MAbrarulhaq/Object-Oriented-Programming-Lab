#include <iostream>
using namespace std;

//declaring a class named Time
class TimeType{
	int hour;
	int minute;
	int second;
	int totalTime;

	public:
	   TimeType(){
			this->hour = 0;
			this->minute = 0;
			this->second = 0;
		}
		TimeType(int hour, int minute, int second){
			this->hour = hour;
			this->minute = minute;
			this->second = second;
		}
		int addTime(TimeType x, TimeType y){
			int totalTimeX = ((x.hour*3600)+(x.minute*60) + x.second);
			int totalTimeY =  ((y.hour*3600)+(y.minute*60) + y.second);
			 this->totalTime = totalTimeX + totalTimeY;
			this->hour = this->totalTime / 3600;
			this->minute = (this->totalTime % 3600) / 60;
			this->second = (this->totalTime % 3600)%60;
			cout<<"totaltime:"<<this->totalTime<<endl;
			//cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
			return this->totalTime;
		}
		void operator ++ () {
		 	this->totalTime++;
			this->hour = this->totalTime / 3600;
			this->minute = (this->totalTime % 3600) / 60;
			this->second = (this->totalTime % 3600)%60;
			}
		void operator ++ (int) {
			++this->totalTime;
			this->hour = this->totalTime / 3600;
			this->minute = (this->totalTime % 3600) / 60;
			this->second = (this->totalTime % 3600)%60;
			}
		void operator -- () {
		 	this->totalTime--;
			this->hour = this->totalTime / 3600;
			this->minute = (this->totalTime % 3600) / 60;
			this->second = (this->totalTime % 3600)%60;
			}
		void operator -- (int) {
			--this->totalTime;
			this->hour = this->totalTime / 3600;
			this->minute = (this->totalTime % 3600) / 60;
			this->second = (this->totalTime % 3600)%60;
			}
		void display(){
			cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
			cout<<"totaltime:"<<this->totalTime<<endl;
		}	
};
// TimeType::TimeType(){
// 	this->hour = 0;
// 	this->minute = 0;
// 	this->second = 0;
// }
// TimeType::TimeType(int hour, int minute, int second){
// 	this->hour = hour;
// 	this->minute = minute;
// 	this->second = second;
// }
// void TimeType::display(){
// 	//cout<<"time: "<<this->hour<<":"<<this->minute<<":"<<this->second<<endl;
// 	cout<<"totaltime:"<<totalTime<<endl;
// }
// int TimeType::addTime(TimeType x ,TimeType y){
// 	int totalTimeX = ((x.hour*3600)+(x.minute*60) + x.second);
// 	int totalTimeY =  ((y.hour*3600)+(y.minute*60) + y.second);
// 	int totalTime = totalTimeX + totalTimeY;
// 	this->hour = totalTime / 3600;
// 	this->minute = (totalTime % 3600) / 60;
// 	this->second = (totalTime % 3600)%60;
// 	return totalTime;
// }	
int main(){
	TimeType t1(1,3,20),t2(2,61,70);
	TimeType t3;
	t3.addTime(t1,t2);
	++t3;
	t3.display();

	t3++;
	t3.display();

	--t3;
	t3.display();

	t3--;
	t3.display();
	
}