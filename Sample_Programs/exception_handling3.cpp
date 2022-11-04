// Program to handle anytype of thrown 
//value using single catch block

#include<iostream>
using namespace std;
int main()
{
	try{
		cout<<"Testing any exception\n"<<endl;
		throw 10;
		throw 'a';
		throw 1.2;
	}
	catch (...) //...
	{
		cout<<"Received the thrown value"<<endl;
	}
}