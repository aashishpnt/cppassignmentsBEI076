#include<iostream>
using namespace std;

class complex{
	int real,imag;
	static int count;
public:
	complex(){
		real = 0;
		imag = 0;
		count = count + 1;
	}
	static int countingFunc(){
		return count;
	}
	
};
int complex :: count = 0;

int main(){
	complex num1;
	complex num2;
	complex num3;
	complex num4;
	cout<<"number of object created = "<<complex :: countingFunc()<<endl;
}

