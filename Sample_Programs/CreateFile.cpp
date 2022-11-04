/*Write a C++ program to create a file using file handling and check whether the file is created successfully or not. If a file is created successfully then it should print “File Created Successfully” otherwise should print some error message.*/

// C++ implementation to create a file
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	// fstream is Stream class to both
	// read and write from/to files.
	// file is object of fstream class
fstream file;

// opening file "Gfg.txt"
// in out(write) mode
// ios::out Open for output operations.
file.open("Gfg.txt",ios::out);

// If no file is created, then
// show the error message.
if(!file)
{
	cout<<"Error in creating file!!!";
	return 0;
}

cout<<"File created successfully.";

// closing the file.
// The reason you need to call close()
// at the end of the loop is that trying
// to open a new file without closing the
// first file will fail.
file.close();

return 0;
}
