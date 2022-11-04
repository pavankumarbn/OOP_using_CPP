#include<iostream>
using namespace std;

int main()
{
	int a, b;
	try{
		cout<<"Enter two numbers"<<endl;
		cin>>a>>b;
		if(b==0) 
			throw 0;
		cout<<"Division ="<<a/b;	
	}
	catch(int x){
		cout<<"Division is not possible"<<endl;
	}
	return 0;
}