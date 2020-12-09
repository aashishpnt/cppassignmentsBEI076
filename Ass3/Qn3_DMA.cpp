#include <iostream> 
using namespace std; 

class DMAtest{
    int *roll = new int;
    char *name = new char [15];
    public:
    void scanRollandName(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter the roll number: ";
        cin>>*roll;
        
    }
    void freeMemory(){
        delete roll;
        delete [] name;
    }
    void printRollandName(){
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Roll No.: "<<*roll;
    }
};
int main () 
{ 
    DMAtest d;
    d.scanRollandName();
    cout<<endl<<"Memory allocated dynamically for name and roll.";
    cout<<endl<<"Value of Name and roll before Deallocation";
    d.printRollandName();
    d.freeMemory();
    cout<<"\n\nAfter Deallocation: ";
    d.printRollandName();
  
    return 0; 
} 
