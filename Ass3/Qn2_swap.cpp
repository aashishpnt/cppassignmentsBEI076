#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;	
}

int main(){
	int l,b;
	
	cout <<"Enter length of rectangle: "<<endl;
	cin >>l;
	
	cout <<"Enter breadth of rectangle: "<<endl;
	cin >>b;
	
	cout <<endl<<"Before swap: "<<endl;
	cout <<"length = "<<l<<"  Breadth = "<<b<<endl;
	
	swap(l,b);
	
	cout <<"\nAfter swap"<<endl;
	cout <<"length = "<<l<<"  Breadth = "<<b<<endl;

	int &ls = (l>b) ? l : b;
	ls = 20;  
		
	cout <<"\nAfter changing value of longer side"<<endl;
    cout <<"length = "<<l<<"  Breadth = "<<b;
}
