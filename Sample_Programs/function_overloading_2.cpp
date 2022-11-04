
#include<iostream>
using namespace std;
class student
{
  public:
    string name, department;
    int marks_a, marks_b, marks_c, marks_d, total_marks;
    student(string dept)
    {
       department=dept;
    }
    void print();
    void cal_marks(string sname, int a, int b, int c, int d);
    void cal_marks(int a, int b, int c);

};

void student::cal_marks(string sname, int a, int b, int c, int d)
{
    name= sname;
    total_marks = a+b+c+d;
}

void student::cal_marks(int a, int b, int c)
{
    total_marks = a+b+c;
}

void student::print()
{
    cout << "The Student Name is: " << name << endl;
    cout << "The Department is: " << department << endl;
    cout << "The Total Marks is: " << total_marks << endl;

}

int main()
{
    student s("EC"), p("CS");
    s.marks_a=88;
    s.marks_b=80;
    s.marks_c=88;
    s.marks_d=80;
    p.name="Pratik";
    p.marks_a=92;
    p.marks_b=88;
    p.marks_c=92;
    s.cal_marks("eshwar", s.marks_a, s.marks_b, s.marks_c, s.marks_d);
    p.cal_marks(p.marks_a, p.marks_b, p.marks_c);
    s.print();
    p.print();
    return 0;
}

