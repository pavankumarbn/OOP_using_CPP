//Array of Objects
#include<iostream>
using namespace std;
class emp
{
	private:
	char name[20];
	int age,sal;
	public:
	int getdata( );
	int putdata( );
};
int emp :: getdata( )
{
	cout<<"enter empname";
	cin>>name;
	cout<<"enter age:"<<endl;
	cin>>age;
	cout<<"enter salary :";
	cin>>sal;
	return 0;
}
int emp :: putdata ()
{
	cout<<"emp name:"<<name<<endl;
	cout<<"emp age:"<<age<<endl;
	cout<<"emp salary:"<<sal;
	return 0;
}
int main()
{
emp foreman[2];
emp engineer[2];
for(int i=0;i<2;i++)
{
	cout<<"for foreman:";
	foreman[i].getdata();
}
cout<<endl;
for(int i=0;i<2;i++)
{
	foreman[i].putdata();
}
for(int i=0;i<2;i++)
{
	cout<<"for engineer:";
	engineer[i].getdata();
}
for(int i=0;i<2;i++)
{
	engineer[i].putdata();
}
return 0;
}