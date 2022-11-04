#include<iostream>
using namespace std;
//binary
class complex
{
 private:
  int real,imag;
 public:
  void getvalue()
  {
   cout<<"Enter the value of real number:";
   cin>>real;
   cout<<"Enter the value of imaginary number:";
   cin>>imag;
  }
  complex operator+(complex obj)
  {
   complex temp;
   temp.real=real+obj.real;
   temp.imag=imag+obj.imag;
   return(temp);
  }
  complex operator-(complex obj)
  {
   complex temp;
   temp.real=real-obj.real;
   temp.imag=imag-obj.imag;
   return(temp);
  }
  void display()
  {
   cout<<real<<"+"<<"("<<imag<<")"<<"i"<<"\n";
  }
};

int main()
{
  complex c1,c2,c3,c4;

  c1.getvalue();
  c2.getvalue();

  c3 = c1+c2;
  c4 = c1-c2;

  cout<<"Result is:\n";
  c3.display();
  c4.display();

 return 0;
}
