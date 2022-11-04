#include<iostream>
using namespace std;

class staticMember {

public: 
	static int a; //Static member declaration
	int b; //Normal member
	void get() {
		a = 10;
		cout<<"a = "<< a <<endl;
		cout<<"b = "<< b <<endl;
	}
};

int staticMember::a = 11;;// = 10; //Defined with intial value "0"

int main(){

	//staticMember:: a = 100;
	//cout<<"a = "<< staticMember::a <<endl;
	staticMember obj;
	obj.get();
	return 0;
}
