#include<iostream>
using namespace std;
class Person{
    protected:
        float weight;
        float height;
        string name;
        char gender;
    public:
    void setwet(float weight){
        this->weight=weight;
    }
    void sethet(float height){
        this->height=height;
    }
    void setnam(string name){
        this->name=name;
    }
    void setgen(char gender){
        this->gender=gender;
    }
    float getwet(){
        return weight;
    }
    float gethet(){
        return height;
    }
    string getnam(){
        return name;
    }
    char getgen(){
        return gender;
    }
    void display(){
        cout<<"height:"<<gethet()<<endl;
        cout<<"weight:"<<getwet()<<endl;
        cout<<"name:"<<getnam()<<endl;
        cout<<"gender:"<<getgen()<<endl;
        

    }


};
class Employee: public Person{
    protected:
             string  employeeid;
             string dateofjoining;
             float salary;
    public:
// for employee
         static int count;
        Employee(){
                count++;
            string year="2022";
            string insti="FAST0";
            string cla="00P";
            this->employeeid = year+insti+to_string(count)+cla;
            //return this->employeeid;
        }
        string show(){
           return this->employeeid;
        //cout<<"I'm object with employee id: "<<this->employeeid<<endl;
        }

// for date of birth
        string getdat(string dat){
            this->dateofjoining=dat;
            cout<<"date of joining is:"<<this->dateofjoining<<endl;
            return this->dateofjoining;
        }
//calculating the salary of a employee
    int incrementsalary(float salary,int hours){

    if(hours>5){
		this->salary= salary+1000;
	}
    else if(hours<5){
        this->salary=salary-200;
    }
    else{
        this->salary=salary;
    }
    return this->salary;
    }

    void print(){
        cout<<"the salary of a person is:"<<salary<<endl;
        cout<<"I'm object with employee id: "<<show()<<endl;
        cout<<"dateofjoining:"<<getdat("9/10/2001")<<endl;
    }
};

//     creating a class for student
class Student: public Person{
    protected:
        string rolnum;
        int    cgpa;
        int  currentsem;
        int   noOfCourses;
    public:
        Student(string rolnum,int cgpa, int currentsem, int noOfCourses){
            this->rolnum=rolnum;
            this->cgpa=cgpa;
            this->currentsem=currentsem;
            this->noOfCourses=noOfCourses;

        }
        string setrolnum(string rolnum){
            this->rolnum=rolnum;
            return this->rolnum;
        }
        int setcgpa( int cgpa){
            this->cgpa=cgpa;
            return this->cgpa;
        }
        int setcurrentsem(int currentsem){
            this->currentsem=currentsem;
            return this->currentsem;
        }
        int setnoco(int noOfCourses){
            this->noOfCourses=noOfCourses;
            return this->noOfCourses;
        }
        void see(){
        cout<<"roll number:"<<setrolnum("21p8038")<<endl;
        cout<<"cgpa:"<<setcgpa(3)<<endl;
        cout<<"currentsem:"<<setcurrentsem(3)<<endl;
        cout<<"no of courses:"<<setnoco(5)<<endl;
        }
};
int Employee::count=0;
int main(){
    Person p1;
    p1.sethet(15.7);
    p1.setwet(40.8);
    p1.setgen('M');
    p1.setnam("Abrar");

    cout<<"-----------------------------------------------------------"<<endl;
    Employee e1;
    e1.getdat("9/10/2001");
    e1.incrementsalary(12000.5, 6);
    p1.display();
    e1.print();

    cout<<"-----------------------------------------------------------"<<endl;
    Student s1("21p8038",3,4,5);
    p1.display();
    s1.see();
    
}