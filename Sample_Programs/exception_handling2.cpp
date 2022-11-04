#include<iostream>
using namespace std;
int main(){

	try{
		cout<<"before throw\n"<<endl;
		throw 1;
		cout<<"after throw\n"<<endl;
	}
	catch(int x){
		cout<<x<<"is printed\n";
	}
	cout<<"---";

return 0;
}