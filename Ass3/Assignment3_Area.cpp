#include<iostream>
using namespace std;
#define PI 3.14

int area(int x=10){return x*x;}

float area(float x){return PI*x*x;}

float area(float x, float y){return x*y;}

int main(){
	int a;
	float r,l,b;
	
    cout <<"Enter length of cube: "<<endl;
    cin >> a;
    
    int areaOfCube = area(a);
    cout <<"Area of cube = "<<areaOfCube<<endl;
    
    cout <<"Enter radius of circle: "<<endl;
    cin >> r;
    
    float areaOfCircle = area(r);
    cout <<"Area of circle: "<<areaOfCircle<<endl;
    
	cout <<"Enter length and breadth of rectangle"<<endl;
    cin >>l>>b;
    
	float areaOfRectangle = area(l,b);
	cout <<"Area of rectangle = "<<areaOfRectangle; 
    
    return 0;
}
