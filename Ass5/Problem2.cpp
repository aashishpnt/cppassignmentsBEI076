#include<iostream>
using namespace std;

class complex{
	const int real=2;
	int imag=13;
public:
	void display(int,int) const;
	int get_real() const {
		return real;
	}
	int get_imag() const{ 
		return imag;
	}	
};

void complex::display(int x, int y) const{
    cout<<"complex number = "<<x<<"+i"<<y<<endl;
}

int main (){
	const complex number;
	int a = number.get_real();
	int b = number.get_imag();
	number.display( a , b );
}
