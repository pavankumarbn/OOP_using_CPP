#include<iostream>
using namespace std;
int main()
{
int x=0;
while(x++<5)
{
static int x;
x+=2;
}
cout<<x<<" ";
return 0;
}