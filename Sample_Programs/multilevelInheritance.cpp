#include<iostream>
using namespace std;

class Shape
{
	public:
		string shapeName = "";
		double radius;
		double side;
		double length, height, width;
		void setShape(string x)
		{
			shapeName = x;
			if(x == "Sphere")
			{
				cout<<"Enter the radius of sphere: ";
				cin>>radius;
			}
			else if(x == "Cube")
			{
				cout<<"Enter the side of cube: ";
				cin>>side;
			}
			else if(x == "Cuboid")
			{
				cout<<"Enter the length, breadth, width of cuboid: ";
				cin>>length>>height>>width;
			}
		}
};

class Area: public Shape
{
	public:
		double area;
		void getArea()
		{
			if(shapeName == "Sphere")
			{
				area = 4*3.14*radius*radius;
				cout<<"Area of Sphere is: "<<area<<endl;
			}
			else if(shapeName == "Cube")
			{
				area = side*side*side;
				cout<<"Area of Cube is: "<<area<<endl;
			}
			else if(shapeName == "Cuboid")
			{
				area = length*width*height;
				cout<<"Area of Cuboid is: "<<area<<endl;
			}
		}
};

class Cost: public Area{
	public:
		double costPerMtrSquare;
		void setCost(double x){
			costPerMtrSquare = x;
		}
		void getCost(){
			double totalCost = costPerMtrSquare*area;
			cout<<"Cost to paint the shape is: "<<totalCost<<endl;
		}
};

int main()
{
	string s;
	double costToPaint;
	cout<<"Enter shape: ";
	cin>>s;
	cout<<"Enter the cost to paint the shape per unit square: ";
	cin>>costToPaint;
	Cost shape;
	shape.setShape(s);
	shape.getArea();
	shape.setCost(costToPaint);
	shape.getCost();
	return 0;
}
