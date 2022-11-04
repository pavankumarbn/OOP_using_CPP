#include<iostream>
using namespace std;
class Const{
	
	public: 
		int x,y;

	Const()	{

		cout<<"Inside of the Constructor"<<endl;
		cout<<"Enter the value of x"<<endl;
		cin>>x;
		cout<<"Enter the value of y"<<endl;
		cin>>y;
	}

	void display(){

		cout<< "Values of x:"<<x<<endl;
		cout<<"Values of y:"<<y<<endl;
	}

};

int main(){
	Const c;
	c.display();
	return 0;
}