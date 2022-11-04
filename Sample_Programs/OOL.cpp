
#include<iostream>
using namespace std;
class student
{
  public:
    string name, department;
    int marks, comb_marks;
    student(string dept)
    {
       department=dept;
    }
    void print();
    void operator+(student a);

};

void student::operator+(student a)
{
    comb_marks=marks+a.marks;
    cout<<"The combined marks is "<<comb_marks<<endl;
}

void student::print()
{
    cout << "The Student Name is: " << name << endl;
    cout << "The Department is: " << department << endl;
    cout << "The Marks is: " << marks << endl;

}

int main()
{
    student s("IT"), p("CS");
    s.name="abc";
    p.name="xyz";
    s.marks=88;
    p.marks=92;
    p+s;
    s.print();
    p.print();
    return 0;
}

