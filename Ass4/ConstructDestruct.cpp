#include <iostream>
using namespace std;

class Time{
	int hr;
	int min;
	int sec;
public:
	Time(){
		hr = 12;
		min = 0;
		sec = 0;
	}
	Time(int seconds){
		sec = seconds;
		hr = sec / 3600;
		min = sec / 60;
		min = (min > 60) ? (min%60) : min;
		sec = sec % 60;
	}
	Time(Time &s){
		hr = s.hr;
		min = s.min;
		sec = s.sec;
	}
	void display(){
		cout<<"The time is "<<hr<<"hours "<<min<<"minute "<<sec<<"seconds "<<endl<<endl;
	}
	~Time(){
		cout<<"destructor is called"<<endl<<endl;
	}
};

int main(){
	
	int s;
	cout<<"Enter time in second: ";
	cin>>s;
	{
	Time t1;
	cout<<"Using default constructor"<<endl;
	t1.display();
}
	{
	Time t2(s);
	cout<<"Using parametrized constructor"<<endl;
	t2.display();
    
	Time t3(t2);
	cout<<"Using copy constructor"<<endl;
	t3.display();
}
}  
