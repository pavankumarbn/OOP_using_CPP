#include<iostream>
using namespace std;


class ConstructOverload{

	public:
	/*ConstructOverload(){

		cout<<"Constructer without parameter"<<endl;
	}
	ConstructOverload(int a, int b){

		
		cout<<"Constructer with parameter"<<endl;
		cout<<"\ta = \t"<<a<<"\tb = \t"<<b<<endl;
	}*/

	void add(){

		int a,b;
		cout<<"Enter the vales of a and b:"<<endl;
		cin>>a;
		cin>>b;
		cout<<a+b<<endl;
	}

	void add(int x, int y){

		cout<<x+y<<endl;
	}

};

int main()
{
	
	
	ConstructOverload obj;
	//ConstructOverload obj1(9,10);*/

	obj.add();
	obj.add(3,2);
	return 0;
}