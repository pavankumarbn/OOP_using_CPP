#include<iostream>
using namespace std;

void counter(){

	//int count = 0;
	static int count = 0;
	cout<<"\t"<<count++<<"\n";
}//but it again becomes zero after end of block

int main(){
	for(int i = 0; i<3; i++){
		counter();
	}
}
