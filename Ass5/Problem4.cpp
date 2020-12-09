#include<iostream>
#include<math.h>

using namespace std;

class complex{
    int real;
	int imag;
 public:
     complex(){
         real=4;
         imag=9;
     }
     friend float magnitude(complex);
};

float magnitude(complex num1){
    int x1 = num1.real*num1.real;
    int x2 = num1.imag*num1.imag;
    int x = x1 + x2;
    return sqrt(x);
}

int main(){
	complex num1;
    cout<<"magnitude = "<<magnitude(num1)<<endl;
}
