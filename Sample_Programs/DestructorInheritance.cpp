#include<iostream>

using namespace std;

class Base
{
	public:
		~Base()
		{
			cout<<"Base class destructor"<<endl;
		}
};

class Derv: public Base
{
	public:
		~Derv()
		{
			cout<<"Derived class destructor"<<endl;
		}
};

int main()
{
	Derv Obj;
	//Base Obj;
	return 0;
}