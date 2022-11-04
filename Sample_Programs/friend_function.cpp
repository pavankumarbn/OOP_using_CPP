//Friend function in C++
#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void input(){
			cout<<"enter value"<<endl;
			cin>>a>>b;
		}
		friend void add(A objec);
};

void add(A objec)
{
	int c;
	c = objec.a + objec.b;
	cout<<"Sum="<<c;
}

int main(){

	A object1;
	object1.input();
	add(object1);

	return 0;
}