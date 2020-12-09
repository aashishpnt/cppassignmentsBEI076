#include<iostream>
using namespace std;

class complex{
private:
	const int real=5;
	int imag=3;
public:
	void display(int,int) const;
	int get_real() const {
		return real;
	}
	int get_imag(){
		return imag;
	}	
};

void complex::display(int x, int y) const{
    cout<<"complex number = "<<x<<"+i"<<y<<endl;
}

int main (){
	complex number;
	int a = number.get_real();
	int b = number.get_imag();
	number.display( a , b );
}
