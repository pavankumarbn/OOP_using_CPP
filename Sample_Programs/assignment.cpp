#include <iostream>
using namespace std;

class test{
	int code;
	static int count;
public:
	void setCode(void)
	{
		code = ++count;
		//cout<<count<<endl;
		//cout<<code<<endl;
	}
	void showCode(void)
	{
		cout<< "object number: " << code <<"\n";
	}

	static void showCount(void){

		cout <<"count:" << count << "\n";
	}

};

int test::count;
int main(){
	
	test t1, t2;

	t1.setCode();

	t2.setCode();

	test::showCount();

	test t3;
	t3.setCode();

	test::showCount();

	t1.showCode();
	t2.showCode();
	t3.showCode();

	return 0;

}