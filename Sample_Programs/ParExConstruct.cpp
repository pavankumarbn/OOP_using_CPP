#include<iostream>
using namespace std;

class Const{
	
	public: 
		int x,y;

	Const(int a, int b)	{
		cout<<"Inside of the Constructor"<<endl;
		 x = a;
		 y = b;
	
	}

	void display(){

		cout<< "Values of x:"<<x<<endl;
		cout<<"Values of y:"<<y<<endl;
	}

};

int main(){
	Const c(20,10);
	c.display();
}