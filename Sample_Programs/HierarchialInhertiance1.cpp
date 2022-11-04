#include <iostream>
using namespace std;

class common { //common class 
	string Name;
	string gender;
	int age;
public:
	void getInfo(){
	cout<<"Enter your name"<<endl;
	cin>>Name;

	cout<<"Enter your gender"<<endl;
	cin>>gender;

	cout<<"Enter Your age"<<endl;
	cin>>age;
	}
	void display_Info(){
		cout<<"displaying Data"<<endl;
		cout<<"Name : "<<Name<<endl;
		cout<<"Gender :"<<gender<<endl;
		cout<<"Age :"<<age<<endl;
	}

};

class Principal: public common{
	int salary;
public:
	void getSalary(){
		cout<<"Enter Prinicipal salary"<<endl;
		cin>>salary;
	}
	void show_salary(){
		cout<<"Princiapl Salary :"<<salary<<"\n"<<endl;
	}

};

class Teacher: public common{
	int salary;
	public:
		void getSalary(){
			cout<<"Enter Teacher salary"<<endl;
			cin>>salary;
		}
		void show_salary(){
			cout<<"Teacher Salary :"<<salary<<"\n"<<endl;
		}

};

class Student: public common{
	int grade;
public:
	void getGrade(){
		cout<<"Enter Student Grade"<<endl;
		cin>>grade;
	}
	void showGrade(){
		cout<<"student grade: "<<grade<<"\n"<<endl;
	}

};

int main(){

	Teacher obj1;
	obj1.getInfo();
	obj1.getSalary();

	obj1.display_Info();
	obj1.show_salary();
	return 0;
}