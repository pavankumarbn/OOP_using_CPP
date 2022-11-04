#include<iostream>
using namespace std;

class Bank
{
	int acno;
	char name[20];
	float bal;

public:
	void getAccDetails()
	{
		cout<<"Enter Acccount number, Name and Balance"<<endl;
		cin>>acno>>name>>bal;
		cout<<"Acno = "<<acno<<endl;
		cout<<"Name ="<<name<<endl;
		cout<<"Balance ="<<bal<<endl;
		cout<<"Your account created"<<endl; 
	}
};

int main()
{
	Bank obj; //class variable
	obj.getAccDetails();
	return 0;
}