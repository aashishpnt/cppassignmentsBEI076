#include <iostream>
using namespace std;
#define PI 3.14

float volume(float vol){
	vol = (4*PI*vol*vol*vol)/3;
	return vol;
}
float area(float a){
	a = 4*PI*a*a;
	return a;
}
int main(){
    float r;
	 
    cout <<"Using dynamic initialization of variable"<<endl<<endl;
    cout <<"Enter radius of sphere : ";
	cin >> r;
	
	float vol = volume(r); 
    cout <<"Volume of sphere is : "<< vol <<endl;
    
    float a = area(r);
	cout <<"Area of sphere is : "<< a <<endl;
    
    cout <<"\nUsing reference variable"<<endl<<endl;
    float &radius = r;
    
    cout <<"New Radius:";
    cin >> radius;
    
    cout <<"value of r: "<< r <<endl;
    float newVol = volume(r);
    
    cout <<"volume of sphere is "<< newVol <<endl;
    float newA = area(r);
	 
	cout <<"area of sphere is "<< newA <<endl;
	
	return 0;   
}
