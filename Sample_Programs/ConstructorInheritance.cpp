#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"Hello this is class A"<<endl;
	}
};

class B : public A{
	public:
	B()
	{
		cout<<"Hello this is class B"<<endl;
	}
};

int main(){
	
	B obj;
	return 0;
}
