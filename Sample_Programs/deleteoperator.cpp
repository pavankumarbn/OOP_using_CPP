#include<iostream>
using namespace std;
int main(){
/*	int *p;
	p = new int;
	*p = 500;
	cout<<"Value in P: "<< *p<<endl;
	delete p;
	cout<<"value after delete"<<*p<<endl;// to check p is deleted or not
	return 0;*/
	int *p;
	p = new int[2];
	p[0] = 10;
	p[1] = 20;
	cout<<"p[0]---"<<p[0]<<endl;
	cout<<"p[1]---"<<p[1]<<endl;
	delete []p;
	cout<<"p[0]---"<<p[0]<<endl;
	cout<<"p[1]---"<<p[1]<<endl;
	return 0;
}
