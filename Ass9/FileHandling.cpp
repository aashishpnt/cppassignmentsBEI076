//Write a program to store information of students in files and retrieve that information to display from the program of the choice of user
 //(Suppose, you store records of N students (name, address, program etc.)
  //in a file and you want to know all the information about student those name is “Ram”,
   //then you can show the student’s details in proper format by entering student name).
    //Your program must use manipulators to store and to show the information in proper formats.
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
// define a class to store student data
class student
{
    
public:
    char name[20];
    char address[30];
    char program[20];
    
    void getData(); // get student data from user
 };
 
void student :: getData() {
    cout << "\nEnter name of student : ";
    cin>>name;
   
    cout << "\nEnter address : ";
    cin>>address;
   
    cout << "\nEnter program : ";
    cin>>program;
}
 
int main(){
	int i;
	cout<<"Number of student's data you want to input : ";
	int n; //counts number of student
	cin>>n;
    student s[n];
    
    fstream file;
    file.open("studentdata.txt", ios :: out); // open file for writing
    
	if (file.is_open()){
		file<<setw(20)<<left<<"Name"<<setw(30)<<left<<"Address"<<setw(20)<<left<<"Program"<<endl; //using manipulators to store
    	
		for (i=0;i<n;i++){
       		cout<<endl;
       		s[i].getData();
       		file<<setw(20)<<left<<s[i].name<<setw(30)<<left<<s[i].address<<setw(20)<<left<<s[i].program<<"\n"; // using manipulators to store 
		}
		file.close(); // close the file
 	}else{
 		cout<<"unable to open file";
	 }
 	
    file.open("studentdata.txt", ios :: in); // open file for reading
    if(file.is_open()){
    	cout<<"\n\nYou can chaeck data for students : "<<endl;
		cout << "\nEnter name of student : ";
		string names;
		string word;
		string linecontent;
 		cin>>names;
 		int c=0;
 		cout<<endl<<setw(20)<<left<<"Name"<<setw(30)<<left<<"Address"<<setw(20)<<left<<"Program\n"; //using manipulators to display
    	while(file>>word){
    		if (names==word){
    			cout<<endl<<word;
    			getline(file,linecontent);
    			cout<<linecontent;
    			c++;
			}
		}
		file.close(); // close the file
	    if (c==0){
	    	cout<<endl<<setw(20)<<left<<"NA"<<setw(30)<<left<<"NA"<<setw(20)<<left<<"NA\n";
		}
	}else{cout<<"file not found";
	 }
    return 0;
}
