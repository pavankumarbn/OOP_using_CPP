#include<fstream>
#include<iostream>
using namespace std;
class student{
	int id;
	char name[20];

	public:
	void getstu()
	{
	cout<< "Enter Student Name and Id:\n";
	cin>>id>>name;
	}
};

int main(){
	student stdObject[3];
	ofstream file;
	file.open("stu.dat",ios::in || ios::out);
	for (int i=0; i<=3;i++) 
		{
			stdObject[i].getstu();
			file.write((char *)&stdObject[i], sizeof(stdObject[i]));
			cout<<i<<"row created\n";
			
		}
file.close();	

return 0;
}