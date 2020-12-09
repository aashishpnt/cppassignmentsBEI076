//Write a program to find the square root of given number using template.
// Check all possible exceptions and handle those exceptions using try and catch block.

#include <iostream>
#include <math.h>
using namespace std;

template <class T>
void sqroot(T num){
	T result;
	if(num>=0){
		result = pow(num,0.5);
		cout<<"sq. root of "<<num<<" is "<<result<<endl<<endl;
	}
	else{
		throw(num);
	} 
}

int main(){
	int a = 4;
	float b = 16.0;
	int c = -9;
	
	try{
		sqroot(a);
		sqroot(b);
		sqroot(c);
	}
	catch(int ex){
		cout<<"exception found : "<<ex<<" is a negative number";
	}
}
