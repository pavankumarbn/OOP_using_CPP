// constructor and destructor 

#include<iostream>

using namespace std;

class test{
	public:
		test()
		{
			cout<<"I am the Constructor\n"<<endl;
		}
		~test() //destructor
		{
			cout<<"I am the Destructor\n"<<endl;
		}
};

int main(){
	test t;
	try{
		cout<<"welcome to exception handling"<<endl;
		throw 10;
		cout<<"Testing Destructor\n"<<endl;
	}
		catch(...){
			cout<<"end"<<endl;
		}
	return 0;
}