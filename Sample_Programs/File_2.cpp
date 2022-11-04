//write a single file handling program in c++ to reading and writing data on a file.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("//home//pkc//Pavan//IIITS_CSE//Subjects//handson//OOP//student.doc");

	fout<<rno<<"\t"<<name<<"\t"<<fee; //write data to the file student

	fout.close();

	ifstream fin("//home//pkc//Pavan//IIITS_CSE//Subjects//handson//OOP//student.doc");

	fin>>rno>>name>>fee; //read data from the file student

	fin.close();

	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

	return 0;
}
