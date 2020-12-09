/*
Problem1: Write a program with three classes Student, Test and Result by using multilevel inheritance.
Assume necessary data members and functions with input information, input data and calculate marks total and display result.
*/

#include<iostream>
using namespace std;

class Student{
    protected:
    	int roll;
    public:
	    void setRoll(int r){
	    	roll = r;
		}	
		void putRoll(){
			cout<<"Roll = "<<roll<<endl;
		}
};

class Test: public Student{
	protected:
		int theory;
		int practical;
	public:
		void setMarks(int t, int p){
			theory = t;
			practical = p;
		}
		void putMarks(){
			cout<<"Theory marks = "<<theory<<endl;
			cout<<"Practical marks = "<<practical<<endl;
		}
};

class Result: public Test{
	protected:
		int totalMarks;
	public:
		
		void display(){
			putRoll();
			putMarks();
			totalMarks = theory + practical;
			cout<<"Total marks = "<<totalMarks<<endl;
		}
};

int main(){
	Result student;
	student.setRoll(1);
	student.setMarks(70,20);
	student.display();
}
