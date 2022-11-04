#include<iostream>
using namespace std;
class base{
public:
	virtual void fun(){
		cout<<"Base function"<<endl;
	}
	//virtual 
	virtual ~base(){
		cout<<"Base Destructor"<<endl;
	}
};
class derived: public base{
public:
	virtual void fun(){
		cout<<"Derived function"<<endl;
	}
	~derived(){
		cout<<"Derived Destructor"<<endl;
	}
};
int main(){
	base *b1 = new base();
	base *b2 = new derived();
	b1->fun();
	b2->fun();
	delete b1;
	delete b2;
	return 0;
}