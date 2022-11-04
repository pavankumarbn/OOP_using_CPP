#include<iostream>
using namespace std;
// this pointer
class thisPtr{

	int a, b;

public:

	void show(){

		a = 9;
		b = 10;

		cout<<"object address is\t"<<this<<endl;

		cout<<"a ="<<this->a<<endl;

		cout<<"b ="<<this->b<<endl;
	}
};

int main(){

	thisPtr obj;
	obj.show();
	return 0;
}