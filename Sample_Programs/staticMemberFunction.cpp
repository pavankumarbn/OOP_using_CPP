#include<iostream>
using namespace std;

//Static function can only access static varibles
class demo{

	static int counter;
public:
	void increase_count(){//This function is used to increment
		//counter variable
		counter++;
	}
	static void showcounter(){ // This is static function 
		//which is used to print value of counter

		cout<<"Count="<<counter<<endl;
	}
};
int demo::counter;//we have to tell compiler that we have static 
//varible in a class
int main(){

	//demo obj1;
	//obj1.increase_count(); //first call
	//obj1.increase_count(); // second call
	demo::showcounter();// a static member function can be called using class name
}