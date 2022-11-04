#include<iostream>
using namespace std;
class base{
public:
	base(){
		cout<<"I am base class constructor"<<endl;
	}
	virtual ~base(){
		cout<<"I am base class destructor"<<endl;
	}
};
class derived:public base{
public:
	derived(){
		cout<<"I am derived class constructor"<<endl;
	}
	~derived(){
		cout<<"I am derived class destructor"<<endl;
	}
};
int main(){
	base *b = new derived;
	delete b;
	return 0;
}

