#include<iostream>
#include <fstream>
#include<iomanip>

using namespace std;
class inventory
{
	char name[10];
	int code;
	float cost;
public:
	void readdata(void);
	void writedata(void);
};

void inventory::readdata(void){
	cout<<"Enter name:";cin>>name;
	cout<<"Enter code:";cin>>code;
	cout<<"Enter cost:";cin>>cost;
}
void inventory::writedata(void){
	cout<<setiosflags(ios::left)
		<<setw(5)<<name
		<<setiosflags(ios::right)
		<<setw(5)<<code
		<<setprecision(3)
		<<setw(5)<<cost
		<<endl;
}
int main(){
	inventory item[3];

	fstream file;

	file.open("stock.dat",ios::in | ios::out);

	cout<<"Enter details for the three items:\n";
	for(int i=0; i<3;i++){
		item[i].readdata();
		file.write((char*)&item[i],sizeof(item[i]));
	}
	file.seekg(0);

	cout<<"\nOUTPUT\n\n";
	for(int i=0;i<3;i++){
		file.read((char*)&item[i],sizeof(item[i]));
		item[i].writedata();
	}
file.close();
return 0;
}

