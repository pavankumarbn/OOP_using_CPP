#include<iostream>

using namespace std;

class DataBase{ //abstract class
public:
	virtual void getname()=0;// pure virtual function
};

class Accountant:public DataBase{
public:
	void getname(){
		cout<< "This is Accountant class"<<endl;
	}
};

class Manager:public DataBase{
public:
	void getname(){
		cout<<"This is Manager Class"<<endl;
	}
};

class Coustomer:public DataBase{
public:
	void getname(){
		cout<<"This is Coustomer class"<<endl;
	}
};

int main()
{
	Manager mObject;
	Accountant aObject;
	Coustomer cObject;

	mObject.getname();
	aObject.getname();
	cObject.getname();
	
	//DataBase dObject; //Object of Abstract class
	DataBase *ptr;
	
	//Manager mObject;
	ptr = &mObject;
	ptr->getname();
	return 0;
}

