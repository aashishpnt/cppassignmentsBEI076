/*Problem2: Define a class named Course. Derive three classes from this class named: Mathematics, Science and Engineering.
 Then, derive two classes from Science named: Physics and Chemistry.
 Define data members and member functions as appropriate.
 Illustrate the concept of member function overriding and accessing overridden member from the derived class in your program.*/

#include<iostream>
using namespace std;

class Course{
	public:
		void display(){
			cout<<"displaying course"<<endl;
		}
};

class Mathematics : public Course{
	protected:
		int mathsMarks;
	public:
		void set_maths_marks(int marks){
			mathsMarks = marks;
		}
		void display(){
			cout<<"Maths marks = "<<mathsMarks<<endl;
		}
};

class Science : public Course{
	protected:
		int scienceMarks;
	public:
		void set_science_marks(int marks){
			scienceMarks = marks;
		}
		void display(){
			cout<<"science marks = "<<scienceMarks<<endl;
		}
};

class Engineering : public Course{
	protected:
		int engineeringMarks;
	public:
		void set_engineering_marks(int marks){
			engineeringMarks = marks;
		}
		void display(){
			cout<<"engineering Marks = "<<engineeringMarks<<endl;
		}
	
};

class Physics: public Science{
	protected:
		int physicsMarks;
	public:
		void set_physics_marks(int marks){
			physicsMarks = marks;
		}
		void display(){
			cout<<"physics marks = "<<physicsMarks<<endl;
		}
};
 
class Chemistry: public Science{
	protected:
		int chemistryMarks;
	public:
		void set_chemistry_marks(int marks){
			chemistryMarks = marks;
		}
};

int main(){
	Chemistry c;
	Mathematics m;
	Physics p;
	
	c.set_science_marks(200);
	c.set_chemistry_marks(100);
	
	p.set_physics_marks(80);
	p.set_science_marks(160);
	
	m.set_maths_marks(120);
	//member function overriding
	c.display();
	c.Course::display();
	p.display();
	p.Science::display();
	m.display();
	m.Course::display();
	return 0;
}

