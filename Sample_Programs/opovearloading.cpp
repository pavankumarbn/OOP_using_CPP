//program to illustrate the use of 
//unary operator overloading, 
//increment ++ and decrement -- operator overloading

#include <iostream>
using namespace std;

class Rectangle{

	int Length, Breadth;
public:
	Rectangle(){
		Length = 0; Breadth = 0;
	}
	void operator ++ (){
		Length+=2;
		Breadth+=2;
	}
	void display(){
		cout<<"\t Length = \t"<<Length<<endl;
		cout<<"\t Breadth = \t"<<Breadth<<endl;
	}
};

int main(){

	Rectangle rectOb;
	cout<<"Length and Breadth before increment"<<endl;

	rectOb.display();
	++rectOb;
	cout<<"Length and Breadth after increment"<<endl;
	rectOb.display();
	
	return 0;

}