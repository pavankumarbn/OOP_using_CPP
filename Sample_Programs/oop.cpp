#include <iostream>
using namespace std;

class Name {

public:
	Name operator *(int n) {

		string retval;
		for (int i=0; i<n; ++i)
			retval += str;
			return Name(retval.c_str());
	}

	void print(){
		cout<<str;
		Name (char *s) {

			str = s;
		}
	}

private:
	string str;
};


int main() {

	Name name("abc");
	Name namemult = name*4;
	namemult.print();
	return 0;
}