//Write a program having Polygon as an abstract class with Length and Height as its data member.
// Create derived class Rectangle and Triangle.
//  Make Area() as pure virtual function and redefine it in derived class to calculate respective area.

#include <iostream>
using namespace std;

class Polygon{
public:
	virtual void Area()=0;  //pure virtual function
};

class Rectangle : public Polygon{
	float l;
	float b;
public:
	void Area(){
		cout<<"Enter length and breadth of rectangle:"<<endl;
		cin>>l;
		cin>>b;
		cout<<"Area of rectangle = "<<l*b<<endl;
	}
};

class Triangle : public Polygon{
	float b;
	float h;
public:
	void Area(){
		cout<<"Enter base and height of triangle : "<<endl;
		cin>>b; 
		cin>>h;
		cout<<"Area of triangle = "<<( 0.5 * b * h )<<endl;
	}
};

int main(){
	Rectangle rect;
	Triangle triangle;
	
	Polygon *polygon = &rect;
	polygon->Area(); //area of rectangle
	
	cout<<endl;
	
	polygon = &triangle;
	polygon->Area(); //area of triangle

}
