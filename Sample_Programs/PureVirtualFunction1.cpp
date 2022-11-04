#include<iostream>
using namespace std;
class A{ //Abstract class
public:
	virtual void show() = 0; //pure virtual function
	void display(){
		cout<<"Hi: I am base class function";
	}
};
class B : public A{
public:
	void show(){
		cout<<"I am derived class";
	}
};

int main(){
	
	 //A objA;
	B objB;
	//objB.display();
	A *ptr;
	ptr = &objB;
	ptr->display();
	return 0;
}