#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;

//class employee declaration
class Employee {
private : 
	int 	empID;
	char 	empName[100] ;
	char 	designation[100];
	int 	ddj,mmj,yyj; //date of joining
	int 	ddb,mmb,yyb; // date of birth
public  :
	//function to read employee details
	void readEmployee(){
		cout<<"EMPLOYEE DETAILS"<<endl;
		cout<<"ENTER EMPLOYEE ID : " ;
		cin>>empID;
		cin.ignore(1);
		cout<<"ENTER  NAME OF THE EMPLOYEE : ";
		cin.getline(empName,100);

		cout<<"ENTER DESIGNATION : ";
		cin.getline(designation,100);
		
		cout<<"ENTER DATE OF JOIN:"<<endl;
		cout<<"DATE : "; cin>>ddj;
		cout<<"MONTH: "; cin>>mmj;
		cout<<"YEAR : "; cin>>yyj;
		
		cout<<"ENTER DATE OF BIRTH:"<<endl;
		cout<<"DATE : "; cin>>ddb;
		cout<<"MONTH: "; cin>>mmb;
		cout<<"YEAR : "; cin>>yyb;
	}
	//function to write employee details
	void displayEmployee(){
		cout<<"EMPLOYEE ID: "<<empID<<endl
		 <<"EMPLOYEE NAME: "<<empName<<endl
		 <<"DESIGNATION: "<<designation<<endl
		 <<"DATE OF JOIN: "<<ddj<<"/"<<mmj<<"/"<<yyj<<endl
		 <<"DATE OF BIRTH: "<<ddb<<"/"<<mmb<<"/"<<yyb<<endl;
	}
};

int main(){
	
	//object of Employee class
	Employee emp;
	//read employee details
	emp.readEmployee();
	
	//write object into the file
	fstream file;
	file.open(FILE_NAME,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	
	file.write((char*)&emp,sizeof(emp));
	file.close();
	cout<<"Date saved into file the file.\n";
	
	//open file again 
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return -1;
	}
	
	if(file.read((char*)&emp,sizeof(emp))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			//print the object
			emp.displayEmployee();
	}
	else{
		cout<<"Error in reading data from file...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}
