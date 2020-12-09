/*Problem3: Re-write a program for above problem to show the order of invocation of constructor and destructor in inheritance.
*/
#include<iostream>
using namespace std;

class Course{
	public:
		Course(){
			cout<<"constructor course"<<endl;
		}
		void display(){
			cout<<"displaying course"<<endl;
		}
		~Course(){
			cout<<"destructor course"<<endl;
		}
};

class Mathematics : public Course{
	protected:
		int mathsMarks;
	public:
		Mathematics(){
			cout<<"constructor maths"<<endl;
		}
		void set_maths_marks(int marks){
			mathsMarks = marks;
		}
		void display(){
			cout<<"Maths marks = "<<mathsMarks<<endl;
		}
		~Mathematics(){
			cout<<"destructor maths"<<endl;
		}
};

class Science : public Course{
	protected:
		int scienceMarks;
	public:
		Science(){
			cout<<"constructor science"<<endl;
		}
		void set_science_marks(int marks){
			scienceMarks = marks;
		}
		void display(){
			cout<<"science marks = "<<scienceMarks<<endl;
		}
		~Science(){
			cout<<"destructor science"<<endl;
		}
};

class Engineering : public Course{
	protected:
		int engineeringMarks;
	public:
		Engineering(){
			cout<<"constructor engineering"<<endl;
		}
		void set_engineering_marks(int marks){
			engineeringMarks = marks;
		}
		void display(){
			cout<<"engineering Marks = "<<engineeringMarks<<endl;
		}
	~Engineering(){
		cout<<"destructor engineering"<<endl;
	}
};

class Physics: public Science{
	protected:
		int physicsMarks;
	public:
		Physics(){
			cout<<"constructor physics"<<endl;
		}
		void set_physics_marks(int marks){
			physicsMarks = marks;
		}
		void display(){
			cout<<"physics marks = "<<physicsMarks<<endl;
		}
		~Physics(){
			cout<<"destructor physics"<<endl;
		}
};
 
class Chemistry: public Science{
	protected:
		int chemistryMarks;
	public:
		Chemistry(){
			cout<<"constructor chemistry"<<endl;
		}
		void set_chemistry_marks(int marks){
			chemistryMarks = marks;
		}
		~Chemistry(){
			cout<<"destructor chemistry"<<endl;
		}
};

int main(){
	Chemistry c;
	Mathematics m;
	Physics p;
	cout<<endl;
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
	cout<<endl;
	return 0;
}

