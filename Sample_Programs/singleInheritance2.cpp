#include<iostream>
using namespace std;
class worker
{
	int age;
	char name [10];
	public:
	void get();
};
void worker::get()
{
cout <<"your name please"
cin >> name;
cout <<"your age please";
cin >> age;
}
void worker :: show()
{
cout <<"In My name is :"<<name<<"In My age is :"<<age;
}
class manager :: public worker //derived class (publicly)
{
int now;
public:
void get ( );
void show ( );
};
void manager::get ( )
{
worker::get(); //the calling of base class input fn.
cout<< "number of workers under you";
cin >> now;
cin>>name>>age;
}
void manager::show()
{
worker::show(); //calling of base class o/p fn.
cout <<"in No. of workers under me are:"<< now;
}
int main()
{

	worker W1;
	manager M1;
	W1.get();
	W1.show();
	return 0;
}