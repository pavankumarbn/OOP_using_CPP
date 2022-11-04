#include<iostream>
using namespace std;
class A{
	int a,b;
public:	
	void input()
	{
		cout<<"Enter two no:";
		cin>>a>>b;
	}
	friend class B;
};

class B{ 

	int c;
public:
	void add(A object)
	{
		c = object.a + object.b;
		cout<<"Sum"<<c;
	}
};

int main(){

	A objectA;
	B objectB;

	objectA.input();
	objectB.add(objectA);
	return 0;
}