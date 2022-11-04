// ARRAY WITH CLASSES:

#include<iostream>
using namespace std;

class employee
{
private:
	char name[20];
	int age,sal;

public:
	int getdata();
	int putdata();
};

int employee :: getdata()
{
	cout<<"enter name :";
	cin>>name;
	cout<<"enter age :";
	cin>>age;
	cout<<"enter salary:";
	cin>>sal;
	return 0;
}

int employee :: putdata( )
{
	cout<<name <<endl;
	cout<<age<<endl;
	cout<<sal<<endl;
	return 0;
}

int main()
{
	employee emp[5];
	for(int i=0;i<5;i++)
	{
		emp[i].getdata();
	}
		cout<<endl;
	for(int i=0;i<5;i++)
	{
		emp[i].putdata();
	}

return 0;
}