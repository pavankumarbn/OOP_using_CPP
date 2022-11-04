// nested try blocks
// how to throw value within another catch block

#include<iostream>
using namespace std;
int main(){
	try{ //outer try block
		cout<<"Hello"<<endl;
		try //inner try block
		{
			cout<<"Inner try block"<<endl;
			throw 10;	
		}
		catch(int x)
		{
			cout<<"throw working"<<endl;
			//throw x;// throwing value within another catch block
		}
	}
	catch(int y){//outer try block catch block
		cout<<"outer try block"<<endl;
	}
return 0;
}