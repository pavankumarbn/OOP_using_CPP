#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class temp
{
 char name[25];
 int code;
public:
 temp()
    {
    }
temp(char *n, int c)
    {
        strcpy(name, n);
        code=c;
    }
};
int main()
{
     temp t[5];
     t[0]=temp("John", 1);
     t[1]=temp("Deck", 2);
     t[2]=temp("Rosh", 3);
     t[3]=temp("Michael",4);
     fstream file;
     file.open("Employee.dat",ios::in | ios::out);
     int i;
     for(i=0;i<4;i++)
         file.write((char *) &t[i],sizeof(t[i]));
         file.seekg(0,ios::end);
         int end=file.tellg();
     cout<<"Number of objects stored in Employee.dat is:"<<sizeof(end)<<endl;
    //cout<<"Number of objects stored in Employee.dat is:"<<end / sizeof(temp);

     return 0;
}